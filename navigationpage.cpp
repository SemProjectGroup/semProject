#include "NavigationPage.h"
#include "ui_navigationpage.h"

NavigationPage::NavigationPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::NavigationPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    connect(ui->toDoListButton, &QPushButton::clicked, this, &NavigationPage::navigateToToDoList);
    connect(ui->habitTrackerButton, &QPushButton::clicked, this, &NavigationPage::navigateToHabitTracker);
}

NavigationPage::~NavigationPage()
{
    delete ui;
}

void NavigationPage::on_pushButton_clicked()
{
    navigateToPomodoro();
}



