#include "tcpclient.h"
#include "QTcpSocket"
#include "QDebug"
#include "QMessageBox"
#include "QStringList"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>


TCPClient* TCPClient::instance = nullptr;
QString TCPClient::clientUsername;
QString TCPClient::readString;
bool TCPClient::readFlag = false;

TCPClient::TCPClient(QObject *parent)
    : QObject{parent}
{

}

QString TCPClient::readyRead()
{
    //activat cand exista date disponibile pentru citire de la server
    QByteArray message;
    message = socket->readAll();
    TCPClient::readFlag = true;//setez flagul ca am primit informatii noi
    TCPClient::readString = QString(message);//le actualizez
    QStringList toks=QString(message).split('#');
    return QString(message);
}



void TCPClient::start(QString ip, unsigned short port)
{
    //primestre adresa IP si portul serverului si initiaza conexiunea
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));//permite sa se apelezea automat readyRead cand sunt date disponibile de citit de la server

    socket->connectToHost(ip, port); // pune ip si port din parametri
    if (socket->waitForConnected(3000))
    {
        qDebug() << "Connected...";
    }
    else
    {
        qDebug() << "Connection to server failed...";
        QMessageBox endMessage;
        endMessage.setIcon(QMessageBox::Critical);
        endMessage.setText("Can't connect to server...");
        endMessage.setInformativeText("Application will close. Press button.");
        endMessage.setStandardButtons(QMessageBox::Close);
        endMessage.setDefaultButton(QMessageBox::Close);

        endMessage.exec();
        exit(0);
    }
}

QString TCPClient::getData(QString requestMessage)
{
    //primeste mesajul de cerere si returneaza raspunsul de la server
    if(socket->isWritable()) //verifica daca socketul e pregatit pentru scriere
    {
        qDebug() << "request message: " << requestMessage;//contine mesajul pe care il trimit la server

        QByteArray msg = requestMessage.toLocal8Bit(); //converteste mesajul in biti
        socket->write(msg.data(),qint64(requestMessage.size()));

        socket->waitForBytesWritten(1000);//asteapta 1000 milisec ca toate datele sunt puse pe socket
    }
    while(TCPClient::readFlag == false)//verifica daca primeste raspuns de la server sau nu
    {
        socket->waitForReadyRead(5000);//asteapta 5 sec ca datele sa fie disponibile pt citire
    }
    QString msg = TCPClient::readString;
    TCPClient::readFlag = false;//raspunsul a fost primit si procesat

    qDebug() << "answer message: " << msg;
    return msg;
}

QStringList TCPClient::getSongData(const QString &requestMessage)
{
    QStringList songDataList;

    // Trimite cererea la server
    QString response = getData(requestMessage);

    // Parsează răspunsul JSON
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response.toUtf8());
    if (!jsonResponse.isNull() && jsonResponse.isArray()) {
        QJsonArray songsArray = jsonResponse.array();
        for (const QJsonValue &songValue : songsArray) {
            if (songValue.isObject()) {
                QJsonObject songObject = songValue.toObject();
                // Extrage URL-ul melodiei
                if (songObject.contains("url") && songObject["url"].isString()) {
                    QString url = songObject["url"].toString();
                    songDataList.append(url);
                }
                // Extrage numele melodiei
                if (songObject.contains("name") && songObject["name"].isString()) {
                    QString name = songObject["name"].toString();
                    songDataList.append(name);
                }
                // Extrage thumbnail-ul melodiei
                if (songObject.contains("thumb") && songObject["thumb"].isString()) {
                    QString thumb = songObject["thumb"].toString();
                    songDataList.append(thumb);
                }
            }
        }
    }

    return songDataList;
}

void TCPClient::stop()
{
    if (this->socket->isOpen())
    {
        this->socket->close();
        qDebug() << "Socket closed...";
    }
}

TCPClient& TCPClient::getInstance()
{
    if( TCPClient::instance == nullptr )
    {
        TCPClient::instance = new TCPClient;
    }
    return *TCPClient::instance;
}

void TCPClient::destroyInstance()
{
    if( TCPClient::instance != nullptr )
    {
        delete TCPClient::instance;
    }
    TCPClient::instance = nullptr;
}
