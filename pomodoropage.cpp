#include "pomodoropage.h"
#include "ui_pomodoropage.h"

int timeLeft=1500;

PomodoroPage::PomodoroPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PomodoroPage),
    timer(new QTimer(this))
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    connect(timer, &QTimer::timeout, this, &PomodoroPage::updateTimer);
}

PomodoroPage::~PomodoroPage()
{
    delete ui;
}

void PomodoroPage::updateTimer()
{
    int index = ui->timerComboBox->currentIndex();
    int arrayOfTimeSpaces[]={25,5,10,30,45,60};
    int timerDuration=25;
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
        ui->hourGlassImageLabel->setText("<img src=':public/public/halfHourGlass.png' >");
    }

    if(timeLeft<= 3*timerDuration/4){
        ui->hourGlassImageLabel->setText("<img src=':public/public/quarterHourGlass.png' >");
    }

    if(timeLeft<= 19*timerDuration/20){
        ui->hourGlassImageLabel->setText("<img src=':public/public/emptyHourGlass.png' >");
    }

}

void PomodoroPage::on_startTimerButton_clicked()
{
    int index = ui->timerComboBox->currentIndex();
    int arrayOfTimeSpaces[]={25,5,10,30,45,60};
    int timerDuration=25;
    timerDuration= arrayOfTimeSpaces[index];
    qDebug()<<"The timer is"<<timerDuration;

    //Need to work on the hourGlass images
    ui->hourGlassImageLabel->setText("<img src=':public/public/threeQuarterHourGlass.png' >");

    if(ui->timeLabel->text()=="00:00"){
        timeLeft= timerDuration*60;
    }

    timer->start(1000);
}

void PomodoroPage::on_resetTimerButton_clicked()
{
    timer->stop();
    ui->timeLabel->setText("00:00");
}

void PomodoroPage::on_stopTimerButton_clicked()
{
    timer->stop();
}

void PomodoroPage::on_goBackButton_clicked()
{
    navigateToNavigationPage();
}

