#include "firebasehandler.h"
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonDocument>
#include <QVariantMap>

FireBaseHandler::FireBaseHandler(QObject *parent)
    : QObject{parent}
{

    networkAccessManager = new QNetworkAccessManager(this);

    // Get Data
    //networkReply = networkAccessManager->get(
    //            QNetworkRequest(QUrl("https://FIREBASEURL/Persons.json")));
    //connect(networkReply, SIGNAL(readyRead()),this,SLOT(networkReplyReadyToRead()));


    // Post Data
    //QVariantMap newPerson;
    //newPerson[ "Age "] = "22";

    //QJsonDocument newPersonJson = QJsonDocument::fromVariant( newPerson );
    //QNetworkRequest newPersonRequest(QUrl("https://FIREBASEURL/Persons.json"));
    //newPersonRequest.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    //networkAccessManager->post(newPersonRequest,newPersonJson.toJson());

}

FireBaseHandler::~FireBaseHandler()
{
    networkAccessManager->deleteLater();
}

void FireBaseHandler::networkReplyReadyToRead()
{
    qDebug() << networkReply->readAll();
}
