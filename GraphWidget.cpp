#include "GraphWidget.h"
#include <QVBoxLayout>
#include <QDateTime>
#include <QDebug>

GraphWidget::GraphWidget(QWidget *parent)
    : QWidget(parent), chartView(new QChartView(this)), chart(new QChart()), series(new QLineSeries())
{

    chart->addSeries(series);
    chart->legend()->hide();
    chartView->setChart(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMinimumSize(800, 600);

    chart->setDropShadowEnabled(true);

    chart->setAnimationOptions(QChart::AllAnimations);
    chart->setAnimationDuration(5000);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    setLayout(layout);
}

void GraphWidget::setData(const QMap<QDateTime, qreal> &data, const QString &title,qreal ymin, qreal ymax)
{

    series->clear();


    qDebug() << "Setting data for:" << title;
    for (auto it = data.begin(); it != data.end(); ++it) {
        qDebug() << "Date:" << it.key().toString("yyyy-MM-dd HH:mm:ss") << "Value:" << it.value();
    }


    for (auto it = data.begin(); it != data.end(); ++it) {
        series->append(it.key().toMSecsSinceEpoch(), it.value());
    }

    QPen pen(Qt::cyan);
    pen.setWidth(4);
    series->setPen(pen);


    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    if (!data.isEmpty()) {
        axisX->setRange(data.firstKey(), data.lastKey());
    }
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);


    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText(title);
    axisY->setRange(ymin, ymax);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);


    chart->setTitle("<h1 style='font-size:72px'>"+title+"</h1>");

    chart->setBackgroundBrush(QBrush(QColor(30, 30, 30)));
    chart->setPlotAreaBackgroundBrush(QBrush(QColor(20, 40, 40)));
    chart->setPlotAreaBackgroundVisible(true);

    QPen axisPen(Qt::white);
    axisX->setLinePen(axisPen);
    axisY->setLinePen(axisPen);

    axisX->setLabelsColor(Qt::white);
    axisY->setLabelsColor(Qt::white);


    qDebug() << "X-Axis Range:" << axisX->min().toString("yyyy-MM-dd HH:mm:ss") << "to" << axisX->max().toString("yyyy-MM-dd HH:mm:ss");
    qDebug() << "Y-Axis Range:" << axisY->min() << "to" << axisY->max();
    qDebug() << "Series Count:" << series->count();
}
