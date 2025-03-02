#ifndef FIREBASEMANAGER_H
#define FIREBASEMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QProcessEnvironment>

class FirebaseManager : public QObject
{
    Q_OBJECT

public:
    explicit FirebaseManager(QObject *parent = nullptr);

    void getData(const QString &path);
    void postData(const QString &path, const QJsonObject &data);

signals:
    void dataReceived(const QJsonObject &data);
    void postFinished(bool success);

private slots:
    void onGetReplyFinished(QNetworkReply *reply);
    void onPostReplyFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *networkManager;
    QString baseUrl;
};

#endif
