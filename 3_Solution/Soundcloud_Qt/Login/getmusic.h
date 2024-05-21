#ifndef GETMUSIC_H
#define GETMUSIC_H

#include <QString>
#include <QStringList>


class getmusic {
private:
    std::vector< QString> SongName;
    std::vector<QString> Url;
    std::vector<QString> Thumbnails;
public:
    getmusic(){}
    getmusic(const getmusic& MusicData);

    //gettere
    std::vector<QString> song_name()const {return SongName;}
    std::vector<QString> url()const {return Url;}
    std::vector<QString> thumbnails()const {return Thumbnails;}

    //settere
    void setSong(const std::vector<QString>& song_name) { SongName = song_name; }
    void setUrl(const std::vector<QString>& url) { Url = url; }
    void setThumb(const std::vector<QString>& Thumb) { Thumbnails = Thumb; }

    void splitMessageSong(QString serverMessage);
    ~getmusic();

// private:
//     QStringList searchQuery;
//     QString response;
//     QStringList results;  // Lista pentru a stoca rezultatele
};

#endif // GETMUSIC_H
