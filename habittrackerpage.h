#ifndef HABITTRACKERPAGE_H
#define HABITTRACKERPAGE_H

#include <QWidget>

#include "FirebaseManager.h"


namespace Ui {
class HabitTrackerPage;
}

class HabitTrackerPage : public QWidget
{
    Q_OBJECT

public:
    explicit HabitTrackerPage(QWidget *parent = nullptr);
    ~HabitTrackerPage();

private slots:
    void on_resetAllButton_clicked();

    void onPostFinished(bool success);

    void on_submitDataButton_clicked();

private:
    Ui::HabitTrackerPage *ui;
    FirebaseManager *firebaseManager;

};

#endif
