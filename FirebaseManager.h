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
    //this is not necessary (was trying to fix a bug, but somehow the bug is gone
    void checkIfDataExists(const QString &path, const QString &key);
    //
    void deleteData(const QString &path);

signals:
    void dataReceived(const QJsonObject &data);
    void postFinished(bool success);
    //this is not necessary (was trying to fix a bug, but somehow the bug is gone
    void checkIfDataExistsFinished(bool success);
    //
    void deleteFinished(bool success);

private slots:
    void onGetReplyFinished(QNetworkReply *reply);
    void onPostReplyFinished(QNetworkReply *reply);
    //this is not necessary (was trying to fix a bug, but somehow the bug is gone
    void oncheckReplyFinished(QNetworkReply *reply);
    //
    void onDeleteReplyFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *networkManager;
    QString baseUrl;
};

#endif
