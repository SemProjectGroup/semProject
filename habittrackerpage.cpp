#include "HabitTrackerPage.h"
#include "ui_HabitTrackerPage.h"

HabitTrackerPage::HabitTrackerPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::HabitTrackerPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);


}

HabitTrackerPage::~HabitTrackerPage()
{
    delete ui;
}
