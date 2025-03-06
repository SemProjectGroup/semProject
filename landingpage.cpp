#include "LandingPage.h"
#include "ui_LandingPage.h"
#include <QDebug.h>
#include <qdebug.h>

LandingPage::LandingPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::LandingPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);


    timer1 = new QTimer(this);
    connect(timer1, &QTimer::timeout,this,&LandingPage::timerFunction);
    timer1->start(5000);


}

void LandingPage::timerFunction(){
    qDebug()<<"Reacher to the second page";
    navigateToLoginPage();
    timer1->disconnect();
}

LandingPage::~LandingPage()
{
    delete ui;
}
