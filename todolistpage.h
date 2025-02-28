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
    ~ToDoListPage();

private:
    Ui::ToDoListPage *ui;
};

#endif
