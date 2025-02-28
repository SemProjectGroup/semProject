/********************************************************************************
** Form generated from reading UI file 'habittrackerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HABITTRACKERPAGE_H
#define UI_HABITTRACKERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HabitTrackerPage
{
public:
    QLabel *titleLabel;

    void setupUi(QWidget *HabitTrackerPage)
    {
        if (HabitTrackerPage->objectName().isEmpty())
            HabitTrackerPage->setObjectName("HabitTrackerPage");
        HabitTrackerPage->resize(400, 300);
        titleLabel = new QLabel(HabitTrackerPage);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(20, 30, 63, 20));

        retranslateUi(HabitTrackerPage);

        QMetaObject::connectSlotsByName(HabitTrackerPage);
    } // setupUi

    void retranslateUi(QWidget *HabitTrackerPage)
    {
        HabitTrackerPage->setWindowTitle(QCoreApplication::translate("HabitTrackerPage", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("HabitTrackerPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HabitTrackerPage: public Ui_HabitTrackerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABITTRACKERPAGE_H
