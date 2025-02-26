#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug.h>
#include <qdebug.h>

int timeLeft=1500;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    timer(new QTimer(this))
{

    ui->setupUi(this);
     connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer);
    timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(timerFunction()));
    timer1->start(2000);


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
    timer1->disconnect();

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


void MainWindow::on_pushButton_2_clicked()
{


}


void MainWindow::on_startTimerButton_clicked()

{
    int index = ui->timerComboBox->currentIndex();
    int arrayOfTimeSpaces[]={10,15,20,30,45,60};
    int timerDuration=10*60;
    timerDuration= arrayOfTimeSpaces[index];
    qDebug()<<"The timer is"<<timerDuration;

    //Need to work on the hourGlass images
    ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/threeQuarterHourGlass.png' >");

    if(ui->timeLabel->text()=="00:00"){
         timeLeft= timerDuration*60;
    }

    timer->start(1000);
}

void MainWindow::updateTimer(){
    int index = ui->timerComboBox->currentIndex();
    int arrayOfTimeSpaces[]={10,15,20,30,45,60};
    int timerDuration=10*60;
    timerDuration= arrayOfTimeSpaces[index];

    if (timeLeft > 0) {
        timeLeft--;
        int minutes = timeLeft / 60;
        int seconds = timeLeft % 60;
        ui->timeLabel->setText(QString::number(minutes).rightJustified(2, '0') + ":" + QString::number(seconds).rightJustified(2, '0'));
    } else {
        timer->stop();
        ui->timeLabel->setText("00:00");
    }

    //Change
    //HourGlass
    //Animation
    //Or remove them all together (too unprofessional)

    if(timeLeft<= timerDuration/2){
          ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/halfHourGlass.png' >");
    }

    if(timeLeft<= 3*timerDuration/4){
        ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/quarterHourGlass.png' >");
    }

    if(timeLeft<= 19*timerDuration/20){
         ui->hourGlassImageLabel->setText("<img src='E:/School/SemProject/emptyHourGlass.png' >");
    }


}


void MainWindow::on_resetTimerButton_clicked()
{
    timer->stop();
    ui->timeLabel->setText("00:00");
}
void MainWindow::on_stopTimerButton_clicked()
{
    timer->stop();
}


