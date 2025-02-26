#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timerFunction();

private slots:

    void on_todoNavButton_clicked();

    void on_deleteItemButton_clicked();

    void on_pomodoroNavButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
};
#endif // MAINWINDOW_H
