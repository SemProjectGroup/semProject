#include "GraphWidget.h"
#include <QVBoxLayout>
#include <QDateTime>

GraphWidget::GraphWidget(QWidget *parent)
    : QWidget(parent), chartView(new QChartView(this)), chart(new QChart()), series(new QLineSeries())
{
    chart->addSeries(series);
    chart->legend()->hide();
    chartView->setChart(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    setLayout(layout);
}

void GraphWidget::setData(const QMap<QDateTime, qreal> &data, const QString &title)
{
    series->clear();

    for (auto it = data.begin(); it != data.end(); ++it) {
        series->append(it.key().toMSecsSinceEpoch(), it.value());
    }

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText(title);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->setTitle(title);
}
