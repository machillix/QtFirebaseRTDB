#ifndef FIREBASEHANDLER_H
#define FIREBASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>


class FireBaseHandler : public QObject
{
    Q_OBJECT
public:
    explicit FireBaseHandler(QObject *parent = nullptr);
    ~FireBaseHandler();

signals:

public slots:
    void networkReplyReadyToRead();

private:

    QNetworkAccessManager *networkAccessManager;
    QNetworkReply* networkReply;

};

#endif // FIREBASEHANDLER_H
