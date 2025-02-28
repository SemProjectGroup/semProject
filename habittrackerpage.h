#ifndef HABITTRACKERPAGE_H
#define HABITTRACKERPAGE_H

#include <QWidget>

namespace Ui {
class HabitTrackerPage;
}

class HabitTrackerPage : public QWidget
{
    Q_OBJECT

public:
    explicit HabitTrackerPage(QWidget *parent = nullptr);
    ~HabitTrackerPage();

private:
    Ui::HabitTrackerPage *ui;
};

#endif
