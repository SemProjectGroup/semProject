
#ifndef HABITTRACKERPAGE_H
#define HABITTRACKERPAGE_H

#include <QWidget>
#include <QScrollArea>
#include <QMap>
#include <QDateTime>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include "FirebaseManager.h"
#include "GraphWidget.h"

namespace Ui {
class HabitTrackerPage;
}

class HabitTrackerPage : public QWidget
{
    Q_OBJECT

public:
    explicit HabitTrackerPage(QWidget *parent = nullptr);
    ~HabitTrackerPage();

signals:

    void navigateToNavigationPage();

private slots:
    void on_resetAllButton_clicked();

    void onPostFinished(bool success);

    void onDataReceived(const QJsonObject &data);

    void on_submitDataButton_clicked();

    void on_goBackButton_clicked();

private:
    Ui::HabitTrackerPage *ui;
    FirebaseManager *firebaseManager;

    QMap<QDateTime, qreal> wakeUpData;
    QMap<QDateTime, qreal> sleepData;
    QMap<QDateTime, qreal> pagesReadData;
    QMap<QDateTime, qreal> exerciseData;
    QMap<QDateTime, qreal> stepsWalkedData;
    QMap<QDateTime, qreal> expensesData;

    GraphWidget *wakeUpGraph;
    GraphWidget *sleepGraph;
    GraphWidget *pagesReadGraph;
    GraphWidget *exerciseGraph;
    GraphWidget *stepsWalkedGraph;
    GraphWidget *expensesGraph;

    QScrollArea *scrollArea;

    void fetchData();
    void displayGraphs();

    QLayout *verticalLayout;
    QScrollArea *chartsScrollArea;
};

#endif
