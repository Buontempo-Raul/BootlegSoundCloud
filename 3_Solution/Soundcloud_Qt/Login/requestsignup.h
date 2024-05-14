#ifndef REQUESTSIGNUP_H
#define REQUESTSIGNUP_H

#include<irequest.h>

class requestSignup
{
protected:
    QString creds;
public:
    requestSignup(QString usern,QString passwd,QString em);
    ~requestSignup(){};
    bool _request();
};

#endif // REQUESTSIGNUP_H
