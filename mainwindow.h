#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class LandingPage;
class NavigationPage;
class ToDoListPage;
class HabitTrackerPage;
class PomodoroPage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void switchToLandingPage();
    void switchToNavigationPage();
    void switchToToDoListPage();
    void switchToHabitTrackerPage();
    void switchToPomodoroPage();

private:
    Ui::MainWindow *ui;



    QStackedWidget *stackedWidget;
    LandingPage *landingPage;
    NavigationPage *navigationPage;
    ToDoListPage *toDoListPage;
    HabitTrackerPage *habitTrackerPage;
    PomodoroPage *pomodoroPage;
};

#endif // MAINWINDOW_H
