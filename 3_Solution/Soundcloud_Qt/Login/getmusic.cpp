#include "getmusic.h"


getmusic::getmusic(const getmusic& MusicData){
    this->SongName=MusicData.SongName;
    this->Thumbnails=MusicData.Thumbnails;
    this->Url=MusicData.Url;
}

void getmusic::splitMessageSong(QString serverMessage)
{
    QStringList parts = serverMessage.split('#');

    const int songDataFields = 3;
    int totalParts = parts.size();


    SongName.clear();
    Url.clear();
    Thumbnails.clear();

    for (int i = 0; i + songDataFields - 1 < totalParts; i += songDataFields) {
        SongName.push_back(parts[i]);
        Url.push_back(parts[i + 1]);
        Thumbnails.push_back(parts[i + 2]);
    }


}

getmusic::~getmusic(){

    SongName.clear();
    Url.clear();
    Thumbnails.clear();
}

