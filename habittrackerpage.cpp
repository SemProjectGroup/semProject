#include "HabitTrackerPage.h"
#include "ui_habittrackerpage.h"
#include <qjsonobject.h>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/qpieseries.h>

HabitTrackerPage::HabitTrackerPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::HabitTrackerPage),
    firebaseManager(new FirebaseManager(this))
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    QWidget *containerWidget = new QWidget(scrollArea);
    QVBoxLayout *containerLayout = new QVBoxLayout(containerWidget);

    // QBarSet *set0=new QBarSet("Test");
    // QBarSet *set1=new QBarSet("fdsfds");
    // QBarSet *set2=new QBarSet("hfdh");
    // QBarSet *set3=new QBarSet("cvbd");
    // QBarSet *set4=new QBarSet("Tedfgfsdst");

    // *set0<<13<<16;
    // *set1<<12<<18;
    // *set2<<11<<10;
    // *set3<<19<<20;
    // *set4<<11<<14;

    // QBarSeries *series = new QBarSeries();
    // series->append(set0);
    // series->append(set1);
    // series->append(set2);
    // series->append(set3);
    // series->append(set4);

    // QChart *chart = new QChart();
    // chart->addSeries(series);
    // chart->setTitle("Test title");

    // QChartView *chartView = new QChartView(chart);


    chartsScrollArea = new QScrollArea(ui->tabWidget);
    chartsScrollArea->setWidgetResizable(true);

    QWidget *chartsContainer = new QWidget(chartsScrollArea);
    QVBoxLayout *chartsLayout = new QVBoxLayout(chartsContainer);


    wakeUpGraph = new GraphWidget(chartsContainer);
    sleepGraph = new GraphWidget(chartsContainer);
    pagesReadGraph = new GraphWidget(chartsContainer);
    exerciseGraph = new GraphWidget(chartsContainer);
    stepsWalkedGraph = new GraphWidget(chartsContainer);
    expensesGraph = new GraphWidget(chartsContainer);


    chartsLayout->addWidget(wakeUpGraph);
    chartsLayout->addWidget(sleepGraph);
    chartsLayout->addWidget(pagesReadGraph);
    chartsLayout->addWidget(exerciseGraph);
    chartsLayout->addWidget(stepsWalkedGraph);
    chartsLayout->addWidget(expensesGraph);

    chartsScrollArea->setWidget(chartsContainer);


    ui->tabWidget->addTab(chartsScrollArea, "Charts");


    // QPieSeries *series = new QPieSeries();
    // series->append("Sleep ",0.3);
    // series->append("Wake Up ",0.7);

    // QPieSlice *slice0= series->slices().at(0);


    // QChart *chart = new QChart();
    // chart->addSeries(series);

    // QChartView *chartView = new QChartView(chart);

    // ui->verticalLayout->addWidget(chartView);

    connect(firebaseManager, &FirebaseManager::postFinished, this, &HabitTrackerPage::onPostFinished);

    connect(firebaseManager, &FirebaseManager::dataReceived, this, &HabitTrackerPage::onDataReceived);

    fetchData();

}

HabitTrackerPage::~HabitTrackerPage()
{
    delete ui;
}

void HabitTrackerPage::fetchData()
{

    QDateTime now = QDateTime::currentDateTime();
    QDateTime oneMonthAgo = now.addMonths(-1);
    QString path = "habitData";
    firebaseManager->getData(path);
}

void HabitTrackerPage::on_resetAllButton_clicked()
{

    ui->wokeUpAtTimeEdit->setTime(QTime(0, 0));
    ui->wenttoSleepAtTimeEdit->setTime(QTime(0, 0));
    ui->pagesReadSpinBox->setValue(0);
    ui->exerciseTimeSpinBox->setValue(0);
    ui->stepsWalkedSpinBox->setValue(0);
    ui->expensesSpinBox->setValue(0.0);
}

void HabitTrackerPage::onPostFinished(bool success)
{
    if (success) {
        qDebug() << "Data posted successfully!";
    } else {
        qDebug() << "Failed to post data.";
    }
}

void HabitTrackerPage::onDataReceived(const QJsonObject &data)
{
    wakeUpData.clear();
    sleepData.clear();
    pagesReadData.clear();
    exerciseData.clear();
    stepsWalkedData.clear();
    expensesData.clear();


    for (const QString &key : data.keys()) {
        QJsonObject entry = data.value(key).toObject();


        QDateTime dateTime = QDateTime::fromString(entry.value("logTime").toString(), "yyyy-MM-dd HH:mm:ss");
        if (!dateTime.isValid()) {
            qDebug() << "Invalid date/time:" << entry.value("logTime").toString();
            continue;
        }


        qDebug() << "Parsed Entry:" << entry;
        qDebug() << "Date/Time:" << dateTime.toString("yyyy-MM-dd HH:mm:ss");


        wakeUpData[dateTime] = QTime::fromString(entry.value("wokeUpAt").toString(), "HH:mm").hour() + QTime::fromString(entry.value("wokeUpAt").toString(), "HH:mm").minute() / 60.0;
        sleepData[dateTime] = QTime::fromString(entry.value("wentToSleepAt").toString(), "HH:mm").hour() + QTime::fromString(entry.value("wentToSleepAt").toString(), "HH:mm").minute() / 60.0;
        pagesReadData[dateTime] = entry.value("pagesRead").toDouble();
        exerciseData[dateTime] = entry.value("exerciseTime").toDouble();
        stepsWalkedData[dateTime] = entry.value("stepsWalked").toDouble();
        expensesData[dateTime] = entry.value("todaysExpenses").toDouble();

        qDebug()<<"====================================================================================";
         qDebug()<< QTime::fromString(entry.value("wokeUpAt").toString(), "HH:mm").hour() + QTime::fromString(entry.value("wokeUpAt").toString(), "HH:mm").minute() / 60.0;
         qDebug()<< QTime::fromString(entry.value("wentToSleepAt").toString(), "HH:mm").hour() + QTime::fromString(entry.value("wentToSleepAt").toString(), "HH:mm").minute() / 60.0;
         qDebug()<<  entry.value("pagesRead").toDouble();
         qDebug()<<  entry.value("exerciseTime").toDouble();
         qDebug()<<  entry.value("stepsWalked").toDouble();
         qDebug()<<  entry.value("todaysExpenses").toDouble();
        qDebug()<<"====================================================================================";
    }


    displayGraphs();
}

void HabitTrackerPage::displayGraphs()
{
    wakeUpGraph->setData(wakeUpData, "Wake-up Time");
    sleepGraph->setData(sleepData, "Sleep Time");
    pagesReadGraph->setData(pagesReadData, "Pages Read");
    exerciseGraph->setData(exerciseData, "Exercise Time (minutes)");
    stepsWalkedGraph->setData(stepsWalkedData, "Steps Walked");
    expensesGraph->setData(expensesData, "Expenses");
}

void HabitTrackerPage::on_submitDataButton_clicked()
{
    QJsonObject habitData;
    habitData["logTime"]=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    habitData["wokeUpAt"] =  ui->wokeUpAtTimeEdit->time().toString("HH:mm");
    habitData["wentToSleepAt"] =  ui->wenttoSleepAtTimeEdit->time().toString("HH:mm");
    habitData["pagesRead"] = ui->pagesReadSpinBox->value();
    habitData["exerciseTime"] =  ui->exerciseTimeSpinBox->value();
    habitData["stepsWalked"] = ui->stepsWalkedSpinBox->value();
    habitData["todaysExpenses"] =  ui->expensesSpinBox->value();


    firebaseManager->postData("habitData", habitData);
}





