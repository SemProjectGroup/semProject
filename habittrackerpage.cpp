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

    QBarSet *set0=new QBarSet("Test");
    QBarSet *set1=new QBarSet("fdsfds");
    QBarSet *set2=new QBarSet("hfdh");
    QBarSet *set3=new QBarSet("cvbd");
    QBarSet *set4=new QBarSet("Tedfgfsdst");

    *set0<<13<<16;
    *set1<<12<<18;
    *set2<<11<<10;
    *set3<<19<<20;
    *set4<<11<<14;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Test title");

    QChartView *chartView = new QChartView(chart);

    ui->verticalLayout->addWidget(chartView);




    connect(firebaseManager, &FirebaseManager::postFinished, this, &HabitTrackerPage::onPostFinished);

}

HabitTrackerPage::~HabitTrackerPage()
{
    delete ui;
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

    // Post data to Firebase
    firebaseManager->postData("habitData", habitData);
}





