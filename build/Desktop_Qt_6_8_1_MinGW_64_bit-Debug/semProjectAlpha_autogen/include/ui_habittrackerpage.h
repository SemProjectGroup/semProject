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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HabitTrackerPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QTimeEdit *wokeUpAtTimeEdit;
    QLabel *label_2;
    QTimeEdit *wenttoSleepAtTimeEdit;
    QLabel *label_3;
    QSpinBox *pagesReadSpinBox;
    QLabel *label_4;
    QSpinBox *exerciseTimeSpinBox;
    QLabel *label_6;
    QSpinBox *stepsWalkedSpinBox;
    QLabel *label_7;
    QSpinBox *expensesSpinBox;
    QPushButton *submitDataButton;
    QPushButton *resetAllButton;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *HabitTrackerPage)
    {
        if (HabitTrackerPage->objectName().isEmpty())
            HabitTrackerPage->setObjectName("HabitTrackerPage");
        HabitTrackerPage->resize(1600, 1000);
        verticalLayout_2 = new QVBoxLayout(HabitTrackerPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(HabitTrackerPage);
        label_5->setObjectName("label_5");
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

        verticalLayout_2->addWidget(label_5);

        tabWidget = new QTabWidget(HabitTrackerPage);
        tabWidget->setObjectName("tabWidget");
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
        formLayoutWidget->setGeometry(QRect(160, 0, 1171, 492));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        formLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer);

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

        wokeUpAtTimeEdit = new QTimeEdit(formLayoutWidget);
        wokeUpAtTimeEdit->setObjectName("wokeUpAtTimeEdit");
        wokeUpAtTimeEdit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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

        formLayout->setWidget(1, QFormLayout::FieldRole, wokeUpAtTimeEdit);

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

        wenttoSleepAtTimeEdit = new QTimeEdit(formLayoutWidget);
        wenttoSleepAtTimeEdit->setObjectName("wenttoSleepAtTimeEdit");
        wenttoSleepAtTimeEdit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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

        formLayout->setWidget(2, QFormLayout::FieldRole, wenttoSleepAtTimeEdit);

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

        pagesReadSpinBox = new QSpinBox(formLayoutWidget);
        pagesReadSpinBox->setObjectName("pagesReadSpinBox");
        pagesReadSpinBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        pagesReadSpinBox->setMaximum(2147483647);

        formLayout->setWidget(3, QFormLayout::FieldRole, pagesReadSpinBox);

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

        exerciseTimeSpinBox = new QSpinBox(formLayoutWidget);
        exerciseTimeSpinBox->setObjectName("exerciseTimeSpinBox");
        exerciseTimeSpinBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        exerciseTimeSpinBox->setMaximum(2147483647);

        formLayout->setWidget(4, QFormLayout::FieldRole, exerciseTimeSpinBox);

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

        stepsWalkedSpinBox = new QSpinBox(formLayoutWidget);
        stepsWalkedSpinBox->setObjectName("stepsWalkedSpinBox");
        stepsWalkedSpinBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        stepsWalkedSpinBox->setMaximum(2147483647);

        formLayout->setWidget(5, QFormLayout::FieldRole, stepsWalkedSpinBox);

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

        expensesSpinBox = new QSpinBox(formLayoutWidget);
        expensesSpinBox->setObjectName("expensesSpinBox");
        expensesSpinBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        expensesSpinBox->setMaximum(2147483647);

        formLayout->setWidget(6, QFormLayout::FieldRole, expensesSpinBox);

        submitDataButton = new QPushButton(tab);
        submitDataButton->setObjectName("submitDataButton");
        submitDataButton->setGeometry(QRect(800, 520, 345, 59));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(submitDataButton->sizePolicy().hasHeightForWidth());
        submitDataButton->setSizePolicy(sizePolicy2);
        submitDataButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(30,255,30,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        resetAllButton = new QPushButton(tab);
        resetAllButton->setObjectName("resetAllButton");
        resetAllButton->setGeometry(QRect(310, 520, 341, 59));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(resetAllButton->sizePolicy().hasHeightForWidth());
        resetAllButton->setSizePolicy(sizePolicy3);
        resetAllButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(255,0,0,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout = new QHBoxLayout(tab_2);
        horizontalLayout->setObjectName("horizontalLayout");
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1506, 685));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


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
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("HabitTrackerPage", "Woke up at    ", nullptr));
        label_2->setText(QCoreApplication::translate("HabitTrackerPage", "Went to sleep at                ", nullptr));
        label_3->setText(QCoreApplication::translate("HabitTrackerPage", "Pages Read                          ", nullptr));
        label_4->setText(QCoreApplication::translate("HabitTrackerPage", "Exercise time                     ", nullptr));
        label_6->setText(QCoreApplication::translate("HabitTrackerPage", "Steps walked", nullptr));
        label_7->setText(QCoreApplication::translate("HabitTrackerPage", "Expenses", nullptr));
        submitDataButton->setText(QCoreApplication::translate("HabitTrackerPage", "Submit Data", nullptr));
        resetAllButton->setText(QCoreApplication::translate("HabitTrackerPage", "Reset all", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HabitTrackerPage", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HabitTrackerPage", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HabitTrackerPage: public Ui_HabitTrackerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABITTRACKERPAGE_H
