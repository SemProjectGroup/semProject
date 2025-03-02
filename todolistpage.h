#ifndef TODOLISTPAGE_H
#define TODOLISTPAGE_H

#include "FirebaseManager.h"

#include <QWidget>

namespace Ui {
class ToDoListPage;
}

class ToDoListPage : public QWidget
{
    Q_OBJECT

public:
    explicit ToDoListPage(QWidget *parent = nullptr);

    void deleteItemFromCompletedSection();
    void deleteItemFromActiveSection();
    void deleteItemFromUpNestSection();

    ~ToDoListPage();

private slots:
    void on_markCompleteButton_clicked();

    void on_markActiveButton_clicked();

    void on_markUpNextButton_clicked();

    void on_deleteItemButton_clicked();

    void on_addItemButton_clicked();

    void onDataReceived(const QJsonObject &data);

    void oncheckReplyFinished(bool success);

    void onDeleteFinished(bool success);

    void onTaskAdded(bool success);

private:
    Ui::ToDoListPage *ui;
    FirebaseManager *firebaseManager;

};

#endif
