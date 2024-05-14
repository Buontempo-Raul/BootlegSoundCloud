#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>

namespace Ui {
class Client;
}

class Client
{
public:
    static Client& getInstance();

    bool connectToServer(const char* ip, int port);
    bool sendData(const char *);
    bool receiveData(char* buffer, int buffSize);

private:

    int m_clientSocket;
    static ClientConnection* m_instance;


    ClientConnection() = default;
    ClientConnection(const ClientConnection&) = delete;
    ClientConnection(ClientConnection&&) = delete;
    ClientConnection& operator=(const ClientConnection&) = delete;

    ~ClientConnection();


};


#endif // CLIENT_H
