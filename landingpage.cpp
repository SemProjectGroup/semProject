#include "LandingPage.h"
#include "ui_LandingPage.h"

LandingPage::LandingPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::LandingPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);
    connect(ui->startButton, &QPushButton::clicked, this, &LandingPage::navigateToNavigationPage);
}

LandingPage::~LandingPage()
{
    delete ui;
}
