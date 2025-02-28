#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "LandingPage.h"
#include "NavigationPage.h"
#include "ToDoListPage.h"
#include "HabitTrackerPage.h"
#include "PomodoroPage.h"

#include <QDebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //Migrating from main to master
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);

    landingPage = new LandingPage(this);
    navigationPage = new NavigationPage(this);
    toDoListPage = new ToDoListPage(this);
    habitTrackerPage = new HabitTrackerPage(this);
    pomodoroPage = new PomodoroPage(this);

    stackedWidget->addWidget(landingPage);
    stackedWidget->addWidget(navigationPage);
    stackedWidget->addWidget(toDoListPage);
    stackedWidget->addWidget(habitTrackerPage);
    stackedWidget->addWidget(pomodoroPage);

    stackedWidget->setCurrentWidget(landingPage);

    connect(landingPage, &LandingPage::navigateToNavigationPage, this, &MainWindow::switchToNavigationPage);
    connect(navigationPage, &NavigationPage::navigateToToDoList, this, &MainWindow::switchToToDoListPage);
    connect(navigationPage, &NavigationPage::navigateToHabitTracker, this, &MainWindow::switchToHabitTrackerPage);
    connect(navigationPage, &NavigationPage::navigateToPomodoro, this, &MainWindow::switchToPomodoroPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchToLandingPage()
{
    stackedWidget->setCurrentWidget(landingPage);
}

void MainWindow::switchToNavigationPage()
{
    stackedWidget->setCurrentWidget(navigationPage);
    qDebug()<< "switchToNav function called";
}

void MainWindow::switchToToDoListPage()
{
    stackedWidget->setCurrentWidget(toDoListPage);
}

void MainWindow::switchToHabitTrackerPage()
{
    stackedWidget->setCurrentWidget(habitTrackerPage);
}

void MainWindow::switchToPomodoroPage()
{
    qDebug()<<"Reached here";
    stackedWidget->setCurrentWidget(pomodoroPage);
}
