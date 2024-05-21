#include "normaluser.h"
#include"requestlogin.h"
normaluser::normaluser(QString usern, QString passwd):cuser(usern,passwd)
{
}

bool normaluser::sendCredentials()
{
    QString diez{"#"};
    QString unu{"1"};
    QString credentials;
    credentials.reserve(username.length()+unu.length()+diez.length()+diez.length()+password.length());
    credentials.append(unu);
    credentials.append(diez);
    credentials.append(username);
    credentials.append(diez);
    credentials.append(password);
    //request catre server
    requestLogin req(credentials);
    return req._request();
    //send to server
    //return requestlogin...


}

bool normaluser::verifyconfirmation(QString passwd)
{
    if(this->password==passwd)
    {
        return true;
    }
    return false;
}
