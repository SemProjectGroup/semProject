#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "FirebaseAuthManager.h"

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();


signals:
    void loginSuccessful();
    void registerSuccessful();
    void navigateToNavigationPage();

private slots:



    void on_loginButton_clicked();

    void on_registerButton_clicked();

    void on_clearAllButton_clicked();

private:
    Ui::LoginPage *ui;

    FirebaseAuthManager *authManager;

     void onLoginSuccess();
    void onLoginError(const QString &error);
     void onRegisterSuccess();
    void onRegisterError(const QString &error);
};

#endif // LOGINPAGE_H
