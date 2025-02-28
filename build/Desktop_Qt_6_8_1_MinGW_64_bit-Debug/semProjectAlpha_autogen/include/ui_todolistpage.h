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
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoListPage
{
public:
    QLabel *titleLabel;

    void setupUi(QWidget *ToDoListPage)
    {
        if (ToDoListPage->objectName().isEmpty())
            ToDoListPage->setObjectName("ToDoListPage");
        ToDoListPage->resize(400, 300);
        titleLabel = new QLabel(ToDoListPage);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(70, 180, 63, 20));

        retranslateUi(ToDoListPage);

        QMetaObject::connectSlotsByName(ToDoListPage);
    } // setupUi

    void retranslateUi(QWidget *ToDoListPage)
    {
        ToDoListPage->setWindowTitle(QCoreApplication::translate("ToDoListPage", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("ToDoListPage", "titleLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoListPage: public Ui_ToDoListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLISTPAGE_H
