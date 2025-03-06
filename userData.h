#ifndef USERDATA_H
#define USERDATA_H

#include <QString>
#include <QObject>

class UserData : public QObject
{
    Q_OBJECT

public:
    static UserData& instance() {
        static UserData instance;
        return instance;
    }

    QString getEmail() const {
        return email;
    }

    void setEmail(const QString &newEmail) {
        email = newEmail;
    }

private:
    UserData() {}
    UserData(const UserData&) = delete;
    UserData& operator=(const UserData&) = delete;

    QString email;
};

#endif // USERDATA_H
