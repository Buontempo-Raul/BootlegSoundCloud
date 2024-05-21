#include "requestsignup.h".h"
#include "cexceptie.h"
#include "requestlogin.h"


requestSignup::requestSignup(QString user,QString pass,QString Email)
{
    QString diez{"#"};
    QString unu{"0"};
    //username,password,email
    creds.append(unu);
    creds.append(diez);
    creds.append(Email);
    creds.append(diez);
    creds.append(user);
    creds.append(diez);
    creds.append(pass);
}

bool requestSignup::_request()
{
    // 1#username#password
    // 2#username#pass#...
    QString data=TCPClient::getInstance().getData(creds);

    if(data!="false"){
        return true;
    }
    /*else{
        CExceptie exc;
        exc.crashApp();
    }*/
    return false;

}
