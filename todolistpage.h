#ifndef TODOLISTPAGE_H
#define TODOLISTPAGE_H

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

private:
    Ui::ToDoListPage *ui;

};

#endif
