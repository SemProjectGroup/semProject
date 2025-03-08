#include "loginpage.h"
#include "ui_loginpage.h"
#include "FirebaseAuthManager.h"


LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    authManager = new FirebaseAuthManager(this);
    connect(authManager, &FirebaseAuthManager::loginSuccess, this, &LoginPage::onLoginSuccess);
    connect(authManager, &FirebaseAuthManager::loginError, this, &LoginPage::onLoginError);
    connect(authManager, &FirebaseAuthManager::registerSuccess, this, &LoginPage::onRegisterSuccess);
    connect(authManager, &FirebaseAuthManager::registerError, this, &LoginPage::onRegisterError);
}

LoginPage::~LoginPage()
{
    delete ui;
}



void LoginPage::onLoginSuccess()
{
    ui->errorLabel->clear();

    emit loginSuccessful();
    navigateToNavigationPage();
}

void LoginPage::onLoginError(const QString &error)
{
    ui->errorLabel->setText(error);
}


void LoginPage::onRegisterSuccess()
{
    ui->errorLabel->clear();
    emit registerSuccessful();
    navigateToNavigationPage();
}

void LoginPage::onRegisterError(const QString &error)
{
    ui->errorLabel->setText(error);
}

void LoginPage::on_loginButton_clicked()
{
    QString email = ui->emailInput->text();
    QString password = ui->passwordInput->text();

    if (email.isEmpty() || password.isEmpty()) {
        ui->errorLabel->setText("Please enter email and password");
        return;
    }

    authManager->login(email, password);
}


void LoginPage::on_registerButton_clicked()
{
    QString email = ui->emailInput->text();
    QString password = ui->passwordInput->text();

    if (email.isEmpty() || password.isEmpty()) {
        ui->errorLabel->setText("Please enter email and password");
        return;
    }

    authManager->registerUser(email, password);
}


void LoginPage::on_clearAllButton_clicked()
{
    ui->emailInput->setText("");
    ui->passwordInput->setText("");
}

