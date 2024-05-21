#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include<QStackedWidget>
#include<QMediaPlayer>
#include<tcpclient.h>
#include"getmusic.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr,const getmusic& MusicData = getmusic());
    ~menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_playStop_clicked();
    void on_next_clicked();
    void on_back_clicked();
    void on_volume_actionTriggered(int action);
    void on_mute_clicked();
    void on_searchBar_clicked();
    void on_pushButton_17_clicked();
    void onSongWidgetClicked(const QString &url);


private:
    Ui::menu *ui;
    QStackedWidget *stackedWidget;
    QMediaPlayer *mediaPlayer;
    TCPClient *tcpClient;
    getmusic *music;
    void populateSongList();


};

#endif // MENU_H
