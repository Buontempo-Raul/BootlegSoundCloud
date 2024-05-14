#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>

class QTcpSocket;

class TCPClient : public QObject {
    Q_OBJECT

public:
    // explicit TCPClient(QObject *parent = nullptr);
    // QAbstractSocket::SocketState getState() const;
    static TCPClient& getInstance();
    static void destroyInstance();

    void start(QString ip, unsigned short port);//primestre adresa IP si portul serverului si initiaza conexiunea
    void stop();//inchide conexiunea cu serverul

    QString getData(QString requestMessage);//primeste mesajul de cerere si returneaza raspunsul de la server

    //aici setez username-ul curent
    static void setUsername(QString str) { TCPClient::clientUsername = str; }
    static QString getUsername() { return TCPClient::clientUsername; }
signals:
    void realtimemessage(QString message);

// public slots:
//     void connectToServer(const QString &host, quint16 port);
//     void sendLogin(const QString &username, const QString &password);
//     void sendSignUp(const QString &username, const QString &password, const QString &email);
//     void sendSearch(const QString &search);

private slots:
    // void connected();
    // void readyRead();
    QString readyRead();//activat cand exista date disponibile pentru citire de la server

private:
    static TCPClient* instance;
    QTcpSocket* socket; //pentru gestiunea conexiunii cu serverul prin protocolul TCP/IP
    static QString clientUsername;
    static QString readString;
    static bool readFlag;

    explicit TCPClient(QObject *parent = nullptr);//nu permite ca un tip diferit sa fie convertit automat in tipul constructorului respectiv
};

#endif // TCPCLIENT_H
