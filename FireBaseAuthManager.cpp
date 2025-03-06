#include "FirebaseAuthManager.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

#include "userdata.h"


FirebaseAuthManager::FirebaseAuthManager(QObject *parent)
    : QObject(parent), networkManager(new QNetworkAccessManager(this))
{
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    apiKey = env.value("API_KEY");
}

void FirebaseAuthManager::login(const QString &email, const QString &password)
{
    QUrl url("https://identitytoolkit.googleapis.com/v1/accounts:signInWithPassword?key=" + apiKey);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["email"] = email;
    json["password"] = password;
    json["returnSecureToken"] = true;

    QNetworkReply *reply = networkManager->post(request, QJsonDocument(json).toJson());
    connect(reply, &QNetworkReply::finished, this, [this, reply]() { onLoginFinished(reply); });
}

void FirebaseAuthManager::registerUser(const QString &email, const QString &password)
{
    QUrl url("https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=" + apiKey);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["email"] = email;
    json["password"] = password;
    json["returnSecureToken"] = true;

    QNetworkReply *reply = networkManager->post(request, QJsonDocument(json).toJson());
    connect(reply, &QNetworkReply::finished, this, [this, reply]() { onRegisterFinished(reply); });
}

void FirebaseAuthManager::onLoginFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QJsonDocument response = QJsonDocument::fromJson(reply->readAll());
        authenticatedUserEmail = response.object().value("email").toString();
        UserData::instance().setEmail( response.object().value("email").toString());
        qDebug() << "Login successful:" << response;
        emit loginSuccess();
    } else {
        QJsonDocument errorResponse = QJsonDocument::fromJson(reply->readAll());
        QString errorMessage = errorResponse.object().value("error").toObject().value("message").toString();
        qDebug() << "Login error:" << errorMessage;
        emit loginError(errorMessage);
    }

    reply->deleteLater();
}

void FirebaseAuthManager::onRegisterFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QJsonDocument response = QJsonDocument::fromJson(reply->readAll());
        authenticatedUserEmail = response.object().value("email").toString();
        UserData::instance().setEmail( response.object().value("email").toString());
        qDebug() << "Registration successful:" << response;
        emit registerSuccess();
    } else {
        QJsonDocument errorResponse = QJsonDocument::fromJson(reply->readAll());
        QString errorMessage = errorResponse.object().value("error").toObject().value("message").toString();
        qDebug() << "Registration error:" << errorMessage;
        emit registerError(errorMessage);
    }

    reply->deleteLater();
}

QString FirebaseAuthManager::getAuthenticatedUserEmail() const
{
    return authenticatedUserEmail;
}
