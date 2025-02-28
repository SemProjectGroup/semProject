#include "pomodoropage.h"
#include "ui_pomodoropage.h"

PomodoroPage::PomodoroPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PomodoroPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);
}

PomodoroPage::~PomodoroPage()
{
    delete ui;
}
