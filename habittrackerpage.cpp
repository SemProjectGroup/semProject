#include "HabitTrackerPage.h"
#include "ui_habittrackerpage.h"
#include <qjsonobject.h>

HabitTrackerPage::HabitTrackerPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::HabitTrackerPage),
    firebaseManager(new FirebaseManager(this))
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);


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





