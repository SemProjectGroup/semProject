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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HabitTrackerPage
{
public:
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLabel *label_2;
    QTimeEdit *timeEdit_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QLabel *label_6;
    QSpinBox *spinBox_5;
    QLabel *label_7;
    QSpinBox *spinBox_6;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;

    void setupUi(QWidget *HabitTrackerPage)
    {
        if (HabitTrackerPage->objectName().isEmpty())
            HabitTrackerPage->setObjectName("HabitTrackerPage");
        HabitTrackerPage->resize(1600, 1000);
        label_5 = new QLabel(HabitTrackerPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 130, 988, 133));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget = new QTabWidget(HabitTrackerPage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(250, 250, 1061, 671));
        tabWidget->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"\n"
"\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.01);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));
        tab = new QWidget();
        tab->setObjectName("tab");
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(-10, 0, 1051, 391));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        timeEdit = new QTimeEdit(formLayoutWidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, timeEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        timeEdit_2 = new QTimeEdit(formLayoutWidget);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, timeEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        spinBox_3 = new QSpinBox(formLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        spinBox_4 = new QSpinBox(formLayoutWidget);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        spinBox_5 = new QSpinBox(formLayoutWidget);
        spinBox_5->setObjectName("spinBox_5");
        spinBox_5->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBox_5);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;\n"
"background-color: rgba(0,0,0,0);\n"
"border:0px;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        spinBox_6 = new QSpinBox(formLayoutWidget);
        spinBox_6->setObjectName("spinBox_6");
        spinBox_6->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:152;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"height: 45;"));

        formLayout->setWidget(6, QFormLayout::FieldRole, spinBox_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        formLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        retranslateUi(HabitTrackerPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HabitTrackerPage);
    } // setupUi

    void retranslateUi(QWidget *HabitTrackerPage)
    {
        HabitTrackerPage->setWindowTitle(QCoreApplication::translate("HabitTrackerPage", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("HabitTrackerPage", "<h1>Habit Tracker</h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"", nullptr));
        label->setText(QCoreApplication::translate("HabitTrackerPage", "Woke up at    ", nullptr));
        label_2->setText(QCoreApplication::translate("HabitTrackerPage", "Went to sleep at                  ", nullptr));
        label_3->setText(QCoreApplication::translate("HabitTrackerPage", "Pages Read                             ", nullptr));
        label_4->setText(QCoreApplication::translate("HabitTrackerPage", "Exercise time                         ", nullptr));
        label_6->setText(QCoreApplication::translate("HabitTrackerPage", "Steps walked", nullptr));
        label_7->setText(QCoreApplication::translate("HabitTrackerPage", "Expenses", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HabitTrackerPage", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HabitTrackerPage", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HabitTrackerPage: public Ui_HabitTrackerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABITTRACKERPAGE_H
