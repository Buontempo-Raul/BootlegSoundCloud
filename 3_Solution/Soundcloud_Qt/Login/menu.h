#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include<QStackedWidget>
#include<QMediaPlayer>
#include<tcpclient.h>
#include"getmusic.h"
#include<QtCore>
#include<QVBoxLayout>

namespace Ui {
class menu;
}

struct Song {
    QString name;
    QString filePath;
};

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr,const getmusic& MusicData = getmusic());
    ~menu();

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_next_clicked();
    void on_back_clicked();
    void on_mute_clicked();
    void on_searchBar_clicked();
    void on_pushButton_17_clicked();
    void onSongWidgetClicked(const QString &url);
    void on_upload_clicked();
    void updateSliderPosition(qint64 position);
    void on_volume_valueChanged(int value);
    void on_horizontalSlider_valueChanged(int value);
    void on_pause_clicked();
    void on_play_clicked();
    void updateSongListUI();

private:
    void updateduration(qint64 duration);
    Ui::menu *ui;
    QStackedWidget *stackedWidget;
    QMediaPlayer *mediaPlayer;
    TCPClient *tcpClient;
    getmusic *music;
    void populateSongList();
    bool is_mute=false;
    qint64 Mduration;
    QList<Song> loadedSongs;
    QVBoxLayout *songsLayout;


};

#endif // MENU_H
