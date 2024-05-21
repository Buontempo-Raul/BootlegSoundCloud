#ifndef REQUESTLOGIN_H
#define REQUESTLOGIN_H

#include "irequest.h"

class requestLogin : public IRequest
{
protected:
    QString creds;
public:
    requestLogin(QString credentials);
    ~requestLogin(){}
    bool _request();
};

#endif // REQUESTLOGIN_H
