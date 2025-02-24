#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerFunction()));
    timer->start(3000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerFunction()
{
    ui->stackedWidget->setCurrentIndex(1);
    qDebug()<<"Reacher to the second page";
    timer->disconnect();

}
