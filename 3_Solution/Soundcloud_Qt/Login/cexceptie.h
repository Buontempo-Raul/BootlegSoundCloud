#ifndef CEXCEPTIE_H
#define CEXCEPTIE_H

#include "iexceptie.h"

class cexceptie : public IExceptie
{
public:
    cexceptie();

    void LoginError();
    void RegisterError();
    void WrongConfirmation();
    void NotAbleToConnect();
    void WaitedforToMuchTime();
    void DisableConnection();
    void Wrong();
    void crashApp();


};

#endif // CEXCEPTIE_H
