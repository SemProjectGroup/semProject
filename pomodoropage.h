#ifndef POMODOROPAGE_H
#define POMODOROPAGE_H

#include <QWidget>

namespace Ui {
class PomodoroPage;
}

class PomodoroPage : public QWidget
{
    Q_OBJECT

public:
    explicit PomodoroPage(QWidget *parent = nullptr);
    ~PomodoroPage();

private:
    Ui::PomodoroPage *ui;
};

#endif // POMODOROPAGE_H
