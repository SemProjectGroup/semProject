/********************************************************************************
** Form generated from reading UI file 'todolistpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLISTPAGE_H
#define UI_TODOLISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoListPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *loadingPage;
    QLabel *label;
    QLabel *label_2;
    QWidget *navigationPage;
    QPushButton *todoNavButton;
    QLabel *label_4;
    QPushButton *pomodoroNavButton;
    QWidget *pomodoroPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *hourGlassImageLabel;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QLabel *timeLabel;
    QComboBox *timerComboBox;
    QPushButton *startTimerButton;
    QPushButton *stopTimerButton;
    QPushButton *resetTimerButton;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *todoListPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *markCompleteButton;
    QSpacerItem *verticalSpacer;
    QPushButton *markActiveButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *markUpNextButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *deleteItemButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *newToDoLineEdit;
    QComboBox *comboBox;
    QPushButton *addItemButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QListWidget *activeTasks;
    QGroupBox *groupBox_2;
    QListWidget *upNestTasks;
    QGroupBox *groupBox_3;
    QListWidget *completedTasks;
    QPushButton *goBackButton;

    void setupUi(QWidget *ToDoListPage)
    {
        if (ToDoListPage->objectName().isEmpty())
            ToDoListPage->setObjectName("ToDoListPage");
        ToDoListPage->resize(1600, 1000);
        stackedWidget = new QStackedWidget(ToDoListPage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(220, 80, 1161, 841));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        loadingPage = new QWidget();
        loadingPage->setObjectName("loadingPage");
        label = new QLabel(loadingPage);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 120, 901, 421));
        label->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 26px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(loadingPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 130, 141, 131));
        label_2->setStyleSheet(QString::fromUtf8("opacity:0.1"));
        stackedWidget->addWidget(loadingPage);
        navigationPage = new QWidget();
        navigationPage->setObjectName("navigationPage");
        todoNavButton = new QPushButton(navigationPage);
        todoNavButton->setObjectName("todoNavButton");
        todoNavButton->setGeometry(QRect(690, 530, 83, 29));
        label_4 = new QLabel(navigationPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 50, 901, 421));
        label_4->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 26px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_4->setTextFormat(Qt::TextFormat::AutoText);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pomodoroNavButton = new QPushButton(navigationPage);
        pomodoroNavButton->setObjectName("pomodoroNavButton");
        pomodoroNavButton->setGeometry(QRect(500, 560, 83, 29));
        stackedWidget->addWidget(navigationPage);
        pomodoroPage = new QWidget();
        pomodoroPage->setObjectName("pomodoroPage");
        verticalLayout_4 = new QVBoxLayout(pomodoroPage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(pomodoroPage);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 26px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        hourGlassImageLabel = new QLabel(pomodoroPage);
        hourGlassImageLabel->setObjectName("hourGlassImageLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hourGlassImageLabel->sizePolicy().hasHeightForWidth());
        hourGlassImageLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(hourGlassImageLabel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalSpacer_8 = new QSpacerItem(5, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_6->addItem(horizontalSpacer_8);

        label_6 = new QLabel(pomodoroPage);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 22px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        timeLabel = new QLabel(pomodoroPage);
        timeLabel->setObjectName("timeLabel");
        sizePolicy1.setHeightForWidth(timeLabel->sizePolicy().hasHeightForWidth());
        timeLabel->setSizePolicy(sizePolicy1);
        timeLabel->setStyleSheet(QString::fromUtf8("\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 128px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        timeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(timeLabel);

        timerComboBox = new QComboBox(pomodoroPage);
        timerComboBox->addItem(QString());
        timerComboBox->addItem(QString());
        timerComboBox->addItem(QString());
        timerComboBox->addItem(QString());
        timerComboBox->addItem(QString());
        timerComboBox->addItem(QString());
        timerComboBox->setObjectName("timerComboBox");
        timerComboBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 16px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.8);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_6->addWidget(timerComboBox);

        startTimerButton = new QPushButton(pomodoroPage);
        startTimerButton->setObjectName("startTimerButton");
        startTimerButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 16px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.5);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_6->addWidget(startTimerButton);

        stopTimerButton = new QPushButton(pomodoroPage);
        stopTimerButton->setObjectName("stopTimerButton");
        stopTimerButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 16px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(255,0,0,0.5);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_6->addWidget(stopTimerButton);

        resetTimerButton = new QPushButton(pomodoroPage);
        resetTimerButton->setObjectName("resetTimerButton");
        resetTimerButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 16px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(255,0,0,0.5);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        verticalLayout_6->addWidget(resetTimerButton);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_11);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_10);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_9);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_5);

        stackedWidget->addWidget(pomodoroPage);
        todoListPage = new QWidget();
        todoListPage->setObjectName("todoListPage");
        verticalLayout_2 = new QVBoxLayout(todoListPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(todoListPage);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 32px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        markCompleteButton = new QPushButton(todoListPage);
        markCompleteButton->setObjectName("markCompleteButton");
        markCompleteButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        horizontalLayout->addWidget(markCompleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        horizontalLayout->addItem(verticalSpacer);

        markActiveButton = new QPushButton(todoListPage);
        markActiveButton->setObjectName("markActiveButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(markActiveButton->sizePolicy().hasHeightForWidth());
        markActiveButton->setSizePolicy(sizePolicy3);
        markActiveButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        horizontalLayout->addWidget(markActiveButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        horizontalLayout->addItem(verticalSpacer_2);

        markUpNextButton = new QPushButton(todoListPage);
        markUpNextButton->setObjectName("markUpNextButton");
        markUpNextButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        horizontalLayout->addWidget(markUpNextButton);

        verticalSpacer_3 = new QSpacerItem(13, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        horizontalLayout->addItem(verticalSpacer_3);

        deleteItemButton = new QPushButton(todoListPage);
        deleteItemButton->setObjectName("deleteItemButton");
        sizePolicy3.setHeightForWidth(deleteItemButton->sizePolicy().hasHeightForWidth());
        deleteItemButton->setSizePolicy(sizePolicy3);
        deleteItemButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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

        horizontalLayout->addWidget(deleteItemButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        newToDoLineEdit = new QLineEdit(todoListPage);
        newToDoLineEdit->setObjectName("newToDoLineEdit");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(newToDoLineEdit->sizePolicy().hasHeightForWidth());
        newToDoLineEdit->setSizePolicy(sizePolicy4);
        newToDoLineEdit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.3);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        horizontalLayout_2->addWidget(newToDoLineEdit);

        comboBox = new QComboBox(todoListPage);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"  font-size: 20px;\n"
"  letter-spacing: 2px;\n"
"  text-decoration: none;\n"
"  text-transform: uppercase;\n"
"  color: white;\n"
"  cursor: pointer;\n"
"  border: 3px solid;\n"
"border-radius:15;\n"
"border-color: white;\n"
"background-color:rgba(0,255,255,0.7);\n"
"  padding: 0.25em 0.5em;\n"
"  box-shadow: 1px 1px 0px 0px, 2px 2px 0px 0px, 3px 3px 0px 0px, 4px 4px 0px 0px, 5px 5px 0px 0px;\n"
"  position: relative;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;"));

        horizontalLayout_2->addWidget(comboBox);

        addItemButton = new QPushButton(todoListPage);
        addItemButton->setObjectName("addItemButton");
        sizePolicy3.setHeightForWidth(addItemButton->sizePolicy().hasHeightForWidth());
        addItemButton->setSizePolicy(sizePolicy3);
        addItemButton->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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

        horizontalLayout_2->addWidget(addItemButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(todoListPage);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy5);
        groupBox->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 18px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        activeTasks = new QListWidget(groupBox);
        activeTasks->setObjectName("activeTasks");
        activeTasks->setGeometry(QRect(10, 30, 361, 481));
        activeTasks->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 16px;\n"
"  color: white;\n"
" text-align: center;\n"
"\n"
"  padding-bottom: 5px;"));

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(todoListPage);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy5.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy5);
        groupBox_2->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 18px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        upNestTasks = new QListWidget(groupBox_2);
        upNestTasks->setObjectName("upNestTasks");
        upNestTasks->setGeometry(QRect(10, 30, 361, 481));
        upNestTasks->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 16px;\n"
"  color: white;\n"
" text-align: center;\n"
"\n"
"  padding-bottom: 5px;"));

        gridLayout->addWidget(groupBox_2, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(todoListPage);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy5.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy5);
        groupBox_3->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 18px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        completedTasks = new QListWidget(groupBox_3);
        completedTasks->setObjectName("completedTasks");
        completedTasks->setGeometry(QRect(10, 30, 361, 481));
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(completedTasks->sizePolicy().hasHeightForWidth());
        completedTasks->setSizePolicy(sizePolicy6);
        completedTasks->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 16px;\n"
"  color: white;\n"
" text-align: center;\n"
"\n"
"  padding-bottom: 5px;"));

        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        stackedWidget->addWidget(todoListPage);
        goBackButton = new QPushButton(ToDoListPage);
        goBackButton->setObjectName("goBackButton");
        goBackButton->setGeometry(QRect(1410, 130, 83, 29));

        retranslateUi(ToDoListPage);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ToDoListPage);
    } // setupUi

    void retranslateUi(QWidget *ToDoListPage)
    {
        ToDoListPage->setWindowTitle(QCoreApplication::translate("ToDoListPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("ToDoListPage", "<div>\n"
"<h1>Let's Be Productive</h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"<p style=\"  text-transform: none; font-size:14px\">The productivity app for all students</p>\n"
"</div>\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("ToDoListPage", "<img src=\"E:\\School\\SemProject\\logo3.png\" width=150 style=\"opacity:0.1\"/>", nullptr));
        todoNavButton->setText(QCoreApplication::translate("ToDoListPage", "Todo List", nullptr));
        label_4->setText(QCoreApplication::translate("ToDoListPage", "<div>\n"
"<h2>This is the navigation page</h2>\n"
"<p style=\"  text-transform: none; font-size:14px\">Iti s a work in progress</p>\n"
"click buttont to go to todo list page\n"
"</div>\n"
"", nullptr));
        pomodoroNavButton->setText(QCoreApplication::translate("ToDoListPage", "Pomodoro", nullptr));
        label_5->setText(QCoreApplication::translate("ToDoListPage", "<h1>POMODORO TIMER</h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"", nullptr));
        hourGlassImageLabel->setText(QCoreApplication::translate("ToDoListPage", "<img src=\"E:\\School\\SemProject\\fullHourGlass.png\" />", nullptr));
        label_6->setText(QCoreApplication::translate("ToDoListPage", "       Set Timern       <hr  style=\"background-color:cyan\">", nullptr));
        timeLabel->setText(QCoreApplication::translate("ToDoListPage", "00:00", nullptr));
        timerComboBox->setItemText(0, QCoreApplication::translate("ToDoListPage", "10 minutes", nullptr));
        timerComboBox->setItemText(1, QCoreApplication::translate("ToDoListPage", "15 minutes", nullptr));
        timerComboBox->setItemText(2, QCoreApplication::translate("ToDoListPage", "20 minutes", nullptr));
        timerComboBox->setItemText(3, QCoreApplication::translate("ToDoListPage", "30 minutes", nullptr));
        timerComboBox->setItemText(4, QCoreApplication::translate("ToDoListPage", "45 minutes", nullptr));
        timerComboBox->setItemText(5, QCoreApplication::translate("ToDoListPage", "60 minutes", nullptr));

        startTimerButton->setText(QCoreApplication::translate("ToDoListPage", "StartTimer", nullptr));
        stopTimerButton->setText(QCoreApplication::translate("ToDoListPage", "Stop Timer", nullptr));
        resetTimerButton->setText(QCoreApplication::translate("ToDoListPage", "Reset Timer", nullptr));
        label_3->setText(QCoreApplication::translate("ToDoListPage", "<h1>To-Do List</h1>\n"
"<hr style=\"background-color:'cyan'\" width=90%/>\n"
"", nullptr));
        markCompleteButton->setText(QCoreApplication::translate("ToDoListPage", "Mark As Completed", nullptr));
        markActiveButton->setText(QCoreApplication::translate("ToDoListPage", "Mark As Active", nullptr));
        markUpNextButton->setText(QCoreApplication::translate("ToDoListPage", "Mark As Up Next", nullptr));
        deleteItemButton->setText(QCoreApplication::translate("ToDoListPage", "Delete", nullptr));
        newToDoLineEdit->setPlaceholderText(QCoreApplication::translate("ToDoListPage", "New To-do list Item", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ToDoListPage", "Completed", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ToDoListPage", "Active", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ToDoListPage", "Up Next", nullptr));

        addItemButton->setText(QCoreApplication::translate("ToDoListPage", "+Add", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ToDoListPage", "Active", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ToDoListPage", "Up Next", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ToDoListPage", "Completed", nullptr));
        goBackButton->setText(QCoreApplication::translate("ToDoListPage", "Go Back ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoListPage: public Ui_ToDoListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLISTPAGE_H
