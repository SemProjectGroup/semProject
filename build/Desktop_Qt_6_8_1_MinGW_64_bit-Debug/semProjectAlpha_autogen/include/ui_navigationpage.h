/********************************************************************************
** Form generated from reading UI file 'navigationpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONPAGE_H
#define UI_NAVIGATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationPage
{
public:
    QPushButton *toDoListButton;
    QPushButton *habitTrackerButton;
    QPushButton *pushButton;

    void setupUi(QWidget *NavigationPage)
    {
        if (NavigationPage->objectName().isEmpty())
            NavigationPage->setObjectName("NavigationPage");
        NavigationPage->resize(1600, 1000);
        toDoListButton = new QPushButton(NavigationPage);
        toDoListButton->setObjectName("toDoListButton");
        toDoListButton->setGeometry(QRect(430, 220, 251, 251));
        toDoListButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"width:800;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:45;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  outline: none !important;\n"
""));
        habitTrackerButton = new QPushButton(NavigationPage);
        habitTrackerButton->setObjectName("habitTrackerButton");
        habitTrackerButton->setGeometry(QRect(860, 220, 251, 251));
        habitTrackerButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:45;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        pushButton = new QPushButton(NavigationPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 550, 251, 251));
        pushButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:45;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        retranslateUi(NavigationPage);

        QMetaObject::connectSlotsByName(NavigationPage);
    } // setupUi

    void retranslateUi(QWidget *NavigationPage)
    {
        NavigationPage->setWindowTitle(QCoreApplication::translate("NavigationPage", "Form", nullptr));
        toDoListButton->setText(QCoreApplication::translate("NavigationPage", "To-Do List", nullptr));
        habitTrackerButton->setText(QCoreApplication::translate("NavigationPage", "Habit Tracker", nullptr));
        pushButton->setText(QCoreApplication::translate("NavigationPage", "PomoDoro Timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationPage: public Ui_NavigationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONPAGE_H
