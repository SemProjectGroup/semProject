#ifndef FIREBASEAUTHMANAGER_H
#define FIREBASEAUTHMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QProcessEnvironment>

class FirebaseAuthManager : public QObject
{
    Q_OBJECT

public:
    explicit FirebaseAuthManager(QObject *parent = nullptr);

    void login(const QString &email, const QString &password);
    void registerUser(const QString &email, const QString &password);

    QString getAuthenticatedUserEmail() const;

signals:
    void loginSuccess();
    void loginError(const QString &error);
    void registerSuccess();
    void registerError(const QString &error);

private slots:
    void onLoginFinished(QNetworkReply *reply);
    void onRegisterFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *networkManager;
    QString apiKey;
    QString authenticatedUserEmail="test@test.com";
};

#endif // FIREBASEAUTHMANAGER_H
