#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class LandingPage;
}

class LandingPage : public QWidget
{
    Q_OBJECT

public:

    void timerFunction();

    explicit LandingPage(QWidget *parent = nullptr);
    ~LandingPage();

signals:
    void navigateToNavigationPage();

private:
    Ui::LandingPage *ui;
    QTimer *timer1;
};

#endif
