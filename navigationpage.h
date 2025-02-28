#ifndef NAVIGATIONPAGE_H
#define NAVIGATIONPAGE_H

#include <QWidget>

namespace Ui {
class NavigationPage;
}

class NavigationPage : public QWidget
{
    Q_OBJECT

public:
    explicit NavigationPage(QWidget *parent = nullptr);
    ~NavigationPage();

signals:
    void navigateToToDoList();
    void navigateToHabitTracker();

private:
    Ui::NavigationPage *ui;
};

#endif
