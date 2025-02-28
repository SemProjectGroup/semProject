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
        NavigationPage->resize(400, 300);
        toDoListButton = new QPushButton(NavigationPage);
        toDoListButton->setObjectName("toDoListButton");
        toDoListButton->setGeometry(QRect(80, 130, 83, 29));
        habitTrackerButton = new QPushButton(NavigationPage);
        habitTrackerButton->setObjectName("habitTrackerButton");
        habitTrackerButton->setGeometry(QRect(220, 140, 83, 29));
        pushButton = new QPushButton(NavigationPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 220, 83, 29));

        retranslateUi(NavigationPage);

        QMetaObject::connectSlotsByName(NavigationPage);
    } // setupUi

    void retranslateUi(QWidget *NavigationPage)
    {
        NavigationPage->setWindowTitle(QCoreApplication::translate("NavigationPage", "Form", nullptr));
        toDoListButton->setText(QCoreApplication::translate("NavigationPage", "toDoListButton", nullptr));
        habitTrackerButton->setText(QCoreApplication::translate("NavigationPage", "habitTrackerButton", nullptr));
        pushButton->setText(QCoreApplication::translate("NavigationPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationPage: public Ui_NavigationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONPAGE_H
