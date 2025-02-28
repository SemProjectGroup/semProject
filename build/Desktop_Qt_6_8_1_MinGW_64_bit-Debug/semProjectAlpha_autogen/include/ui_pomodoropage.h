/********************************************************************************
** Form generated from reading UI file 'pomodoropage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POMODOROPAGE_H
#define UI_POMODOROPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PomodoroPage
{
public:

    void setupUi(QWidget *PomodoroPage)
    {
        if (PomodoroPage->objectName().isEmpty())
            PomodoroPage->setObjectName("PomodoroPage");
        PomodoroPage->resize(400, 300);

        retranslateUi(PomodoroPage);

        QMetaObject::connectSlotsByName(PomodoroPage);
    } // setupUi

    void retranslateUi(QWidget *PomodoroPage)
    {
        PomodoroPage->setWindowTitle(QCoreApplication::translate("PomodoroPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PomodoroPage: public Ui_PomodoroPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODOROPAGE_H
