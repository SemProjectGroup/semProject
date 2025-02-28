/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName("LandingPage");
        LandingPage->resize(1600, 1000);
        LandingPage->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(LandingPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 120, 351, 261));
        label_2->setStyleSheet(QString::fromUtf8("opacity:0.1"));
        label = new QLabel(LandingPage);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 220, 1291, 551));
        label->setStyleSheet(QString::fromUtf8(" position: relative;\n"
"  padding: 0;\n"
"  margin: 0;\n"
"  font-family: \"Raleway\", sans-serif;\n"
"  font-weight: 300;\n"
"  font-size: 54px;\n"
"  color: white;\n"
" text-align: center;\n"
"  text-transform: uppercase;\n"
"  padding-bottom: 5px;"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QWidget *LandingPage)
    {
        LandingPage->setWindowTitle(QCoreApplication::translate("LandingPage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("LandingPage", "<img src=\"E:\\School\\SemProject\\logo3.png\" width=300 style=\"opacity:0.1\"/>", nullptr));
        label->setText(QCoreApplication::translate("LandingPage", "<div>\n"
"<h1>Let's Be Productive</h1>\n"
"<hr style=\"background-color:'cyan'\" width=80%/>\n"
"<p style=\"  text-transform: none; font-size:28px\">The productivity app for all students</p>\n"
"</div>\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
