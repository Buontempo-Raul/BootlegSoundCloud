#ifndef REQUESTMUSIC_H
#define REQUESTMUSIC_H
#include<irequest.h>

class requestmusic:public IRequest
{
protected:
    QString creds;
public:
    requestmusic(QString message);
    ~requestmusic(){}
    bool _request();
    static getmusic MusicData;
};

#endif // REQUESTMUSIC_H
