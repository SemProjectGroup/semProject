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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1600, 1000);
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(520, 740, 101, 41));
        loginButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 18px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: rgb(120,120,120);\n"
"background-color:rgb(0,185,185);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        registerButton = new QPushButton(LoginPage);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(360, 740, 141, 41));
        registerButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 18px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: rgb(120,120,120);\n"
"background-color:rgb(0,185,185);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        clearAllButton = new QPushButton(LoginPage);
        clearAllButton->setObjectName("clearAllButton");
        clearAllButton->setGeometry(QRect(640, 740, 131, 41));
        clearAllButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 18px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: rgb(120,120,120);\n"
"background-color:rgba(185,0,0,0.7);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 530, 101, 51));
        label->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 24px;\n"
"  color: rgb(100,100,100);\n"
" text-align: center;\n"
"  padding-bottom: 5px;"));
        label_2 = new QLabel(LoginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 610, 111, 71));
        label_2->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 24px;\n"
"  color: rgb(100,100,100);\n"
" text-align: center;\n"
"  padding-bottom: 5px;"));
        emailInput = new QLineEdit(LoginPage);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(490, 530, 251, 41));
        emailInput->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: rgb(120,120,120);\n"
"background-color:rgb(0,185,185);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        passwordInput = new QLineEdit(LoginPage);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(490, 620, 251, 41));
        passwordInput->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: rgb(120,120,120);\n"
"background-color:rgb(0,185,185);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        errorLabel = new QLabel(LoginPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(380, 820, 361, 20));
        errorLabel->setStyleSheet(QString::fromUtf8("color:rgb(200,200,200)"));
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(790, 340, 481, 531));
        label_3->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 26px;\n"
"  color: white;\n"
" text-align: center;\n"
"  padding-bottom: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 255, 255, 255), stop:1 rgba(0, 135, 135, 255));\n"
"border-top-right-radius: 25;\n"
"border-bottom-right-radius: 25;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(LoginPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 340, 461, 531));
        label_4->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 28px;\n"
"  color: white;\n"
" text-align: center;\n"
"  padding-bottom: 5px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(150, 150, 150, 255), stop:1 rgba(250, 250, 250, 255));\n"
"border-top-left-radius: 25;\n"
"border-bottom-left-radius: 25;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(LoginPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 400, 301, 61));
        label_5->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 18px;\n"
"  color: rgb(100,100,100);\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_6 = new QLabel(LoginPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 70, 351, 261));
        label_6->setStyleSheet(QString::fromUtf8("opacity:0.1"));
        label_7 = new QLabel(LoginPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, -90, 1291, 551));
        label_7->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 34px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_7->setTextFormat(Qt::TextFormat::AutoText);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4->raise();
        loginButton->raise();
        registerButton->raise();
        clearAllButton->raise();
        label->raise();
        label_2->raise();
        emailInput->raise();
        passwordInput->raise();
        errorLabel->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "login", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginPage", "register", nullptr));
        clearAllButton->setText(QCoreApplication::translate("LoginPage", "clear all", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        errorLabel->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "<div>\n"
"<h1>Welcome user!</h1>\n"
"<br>\n"
"Enter your personal details and\n"
"<br> start your productivity journey  <br> with us\n"
"\n"
"\n"
"</div>\n"
"", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("LoginPage", "<h1>Login/Signup </h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"", nullptr));
        label_6->setText(QCoreApplication::translate("LoginPage", "<img src=\"E:\\School\\SemProject\\logo3.png\" width=300 style=\"opacity:0.1\"/>", nullptr));
        label_7->setText(QCoreApplication::translate("LoginPage", "<div>\n"
"<h1>Let's Be Productive</h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"<p style=\"  text-transform: none; font-size:28px\">The productivity app for all students</p>\n"
"</div>\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
