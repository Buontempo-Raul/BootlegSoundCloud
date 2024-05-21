#include "requestmusic.h"
#include"cexceptie.h"

getmusic requestmusic::MusicData=getmusic();

requestmusic::requestmusic(QString message)
{
    QString diez{"#"};
    QString doi{"2"};
    //message
    creds.append(doi);
    creds.append(diez);
    creds.append(message);
}

bool requestmusic::_request()
{

    QString data=TCPClient::getInstance().getData(creds);

    /*if(data!="NOK"){
        WeatherData.splitMessageWeather(data);
        return true;
    }
    else{
      CExceptie exc;
      exc.WrongCity();

      CExceptie exc1;
      exc1.crashApp();

    }*/


    if(data=="wrong"){
        cexceptie exc;
        exc.Wrong();
    }
    else if(data=="eroare API"){
        cexceptie exc1;
        exc1.crashApp();
    }
    else{
        MusicData.splitMessageSong(data);
        return true;
    }

    return false;

}
