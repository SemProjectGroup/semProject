/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QPushButton *loginButton;
    QPushButton *registerButton;
    QPushButton *clearAllButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *emailInput;
    QLineEdit *passwordInput;
    QLabel *errorLabel;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1600, 1000);
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(520, 640, 83, 29));
        registerButton = new QPushButton(LoginPage);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(700, 630, 83, 29));
        clearAllButton = new QPushButton(LoginPage);
        clearAllButton->setObjectName("clearAllButton");
        clearAllButton->setGeometry(QRect(870, 630, 83, 29));
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 320, 101, 51));
        label_2 = new QLabel(LoginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 400, 111, 71));
        emailInput = new QLineEdit(LoginPage);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(700, 330, 231, 41));
        passwordInput = new QLineEdit(LoginPage);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(700, 410, 231, 41));
        errorLabel = new QLabel(LoginPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(600, 750, 361, 20));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "login", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginPage", "register", nullptr));
        clearAllButton->setText(QCoreApplication::translate("LoginPage", "clear all", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
        errorLabel->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
