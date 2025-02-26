#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug.h>
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerFunction()));
    timer->start(3000);

    QListWidget *listWidget1 = ui->completedTasks;

    QListWidgetItem *item= new QListWidgetItem(QIcon(),"test");


    for (int var = 0; var < 11; ++var) {
        ui->completedTasks->addItem("Task Number "+QString::number(var));
        ui->completedTasks->addItem("             ");
        ui->activeTasks->addItem("Task Number "+QString::number(var));
        ui->activeTasks->addItem("             ");
        ui->upNextTasks->addItem("Task Number "+QString::number(var));
        ui->upNextTasks->addItem("             ");
    }

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


void MainWindow::on_deleteItemButton_clicked()
{
    QListWidgetItem *temp= ui->completedTasks->currentItem();
    QModelIndex tempIndex = ui->completedTasks->indexFromItem(temp);

   int count=ui->completedTasks->count();
   qDebug()<< tempIndex.row();

   ui->completedTasks->setCurrentIndex(tempIndex);
    delete temp;
    QListWidgetItem *temp2= ui->completedTasks->currentItem();
    delete temp2;
}


void MainWindow::on_todoNavButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_pomodoroNavButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

int count=0;
void MainWindow::on_pushButton_2_clicked()
{

    count++;
    if(count==1){
    ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/fullHourGlass.png' >");
    }
    if(count==2){
        ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/threeQuarterHourGlass.png' >");
    }
    if(count==3){
        ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/halfHourGlass.png' >");
    }
    if(count==4){
        ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/quarterHourGlass.png' >");
    }
    if(count==5){
        ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/emptyHourGlass.png' >");
    }
}

