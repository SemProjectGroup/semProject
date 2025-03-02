#include "FirebaseManager.h"
#include <QDebug>

FirebaseManager::FirebaseManager(QObject *parent)
    : QObject(parent), networkManager(new QNetworkAccessManager(this))
{
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    baseUrl = env.value("FIREBASEURL");
    qDebug()<<baseUrl;
}

void  FirebaseManager::getData(const QString &path)
{
    QString fullUrl = baseUrl + path + ".json";
    QNetworkRequest request;
    request.setUrl(QUrl(fullUrl));

    QNetworkReply *reply = networkManager->get(request);
    connect(reply, &QNetworkReply::finished, this, [this, reply]() { onGetReplyFinished(reply); });

    if (!reply->error()) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
        if (!jsonResponse.isNull()) {
            emit dataReceived(jsonResponse.object());

        }

    } else {
        qDebug() << "GET Error:" ;

    }


}

void FirebaseManager::postData(const QString &path, const QJsonObject &data)
{
    QString fullUrl = baseUrl + path + ".json";
    QNetworkRequest request;
    request.setUrl(QUrl(fullUrl));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonDocument jsonDoc(data);
    QByteArray jsonData = jsonDoc.toJson();

    QNetworkReply *reply = networkManager->post(request, jsonData);
    connect(reply, &QNetworkReply::finished, this, [this, reply]() { onPostReplyFinished(reply); });
}

void FirebaseManager::onGetReplyFinished(QNetworkReply *reply)
{
    if (!reply->error()) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
        if (!jsonResponse.isNull()) {
            emit dataReceived(jsonResponse.object());
        }
    } else {
        qDebug() << "GET Error:" ;
    }

    reply->deleteLater();
}

void FirebaseManager::onPostReplyFinished(QNetworkReply *reply)
{
    if (!reply->error()) {
        emit postFinished(true);
    } else {
        qDebug() << "POST Error:" ;
        emit postFinished(false);
    }

    reply->deleteLater();
}
