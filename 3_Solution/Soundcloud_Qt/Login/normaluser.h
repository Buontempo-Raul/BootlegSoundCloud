#ifndef NORMALUSER_H
#define NORMALUSER_H

#include "cuser.h"

class normaluser : public cuser
{
public:
    normaluser(QString usern,QString passwd);
    ~normaluser(){};
    bool sendCredentials();
    bool verifyconfirmation(QString passwd);
};

#endif // NORMALUSER_H
