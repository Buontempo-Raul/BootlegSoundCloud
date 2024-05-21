#include "requestlogin.h"
#include<QDebug>
#include "cexceptie.h"


requestLogin::requestLogin(QString credentials):creds(credentials)
{

}

bool requestLogin::_request()
{
    //send creds to server
    QString data=TCPClient::getInstance().getData(creds);

    if (creds.contains("##")) {
        return false;
    }

    if(data!="false"){
        QString copy=data;
        QString part = copy.split('#', Qt::SkipEmptyParts).at(0);
        return true;
    }
    //else{
    //    CExceptie exc;
    //    exc.crashApp();
    //}
    return false;
}
