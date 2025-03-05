#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QLineSeries>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>

    class GraphWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GraphWidget(QWidget *parent = nullptr);
    void setData(const QMap<QDateTime, qreal> &data, const QString &title);

private:
    QChartView *chartView;
    QChart *chart;
    QLineSeries *series;
};

#endif // GRAPHWIDGET_H
