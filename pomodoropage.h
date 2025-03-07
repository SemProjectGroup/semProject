#ifndef POMODOROPAGE_H
#define POMODOROPAGE_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class PomodoroPage;
}

class PomodoroPage : public QWidget
{
    Q_OBJECT

public:
    explicit PomodoroPage(QWidget *parent = nullptr);
    ~PomodoroPage();

signals:

    void navigateToNavigationPage();

private slots:
    void updateTimer();

    void on_startTimerButton_clicked();

    void on_resetTimerButton_clicked();

    void on_stopTimerButton_clicked();

    void on_goBackButton_clicked();

private:
    Ui::PomodoroPage *ui;

    QTimer *timer;


};

#endif // POMODOROPAGE_H
