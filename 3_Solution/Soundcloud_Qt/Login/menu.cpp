#include "menu.h"
#include "ui_menu.h"
#include<QMessageBox>
#include<getmusic.h>
#include"cexceptie.h"
#include"requestmusic.h"
#include <QVBoxLayout>
#include"songwidget.h"

menu::menu(QWidget *parent,const getmusic& MusicData)
    : QDialog(parent)
    , ui(new Ui::menu)
    ,music(new getmusic(MusicData))
{
    ui->setupUi(this);
    mediaPlayer = new QMediaPlayer(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &menu::on_pushButton_2_clicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &menu::on_pushButton_clicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &menu::on_pushButton_4_clicked);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &menu::on_pushButton_5_clicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &menu::on_pushButton_6_clicked);
    connect(ui->playStop, &QPushButton::clicked, this, &menu::on_playStop_clicked);
    connect(ui->next, &QPushButton::clicked, this, &menu::on_next_clicked);
    connect(ui->back, &QPushButton::clicked, this, &menu::on_back_clicked);
    connect(ui->volume, &QSlider::valueChanged, this, &menu::on_volume_actionTriggered);
    connect(ui->mute, &QPushButton::clicked, this, &menu::on_mute_clicked);
    connect(ui->searchBar,&QPushButton::clicked, this, &menu::on_searchBar_clicked);

    ui->groupBox->setVisible(false);
    ui->searchLineEdit->setPlaceholderText("Search Music");
   // populateSongList();
}

menu::~menu()
{
    delete ui;
}

void menu::populateSongList()
{

    // Adaugă noi melodii
    for (size_t i = 0; i < music->song_name().size(); ++i) {
        SongWidget *songWidget = new SongWidget(music->song_name()[i], music->thumbnails()[i], music->url()[i], this);
        connect(songWidget, &SongWidget::clicked, this, &menu::onSongWidgetClicked);
        ui->searchWidgetList->layout()->addWidget(songWidget);
    }
}

void menu::onSongWidgetClicked(const QString &url)
{
    mediaPlayer->setMedia(QUrl(url));
    mediaPlayer->play();
}

void menu::on_pushButton_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}



void menu::on_pushButton_2_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
}


void menu::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void menu::on_pushButton_5_clicked()
{
 ui->stackedWidget->setCurrentIndex(1);
}


void menu::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void menu::on_playStop_clicked()
{
    if (mediaPlayer->state() == QMediaPlayer::PlayingState) {
        mediaPlayer->pause();
        ui->playStop->setIcon(QIcon(":/beg/play.png"));
    } else {
        mediaPlayer->play();
        ui->playStop->setIcon(QIcon(":/beg/stop.png"));
    }
}


void menu::on_next_clicked()
{

}


void menu::on_back_clicked()
{

}


void menu::on_volume_actionTriggered(int action)
{
    mediaPlayer->setVolume(action);
}


void menu::on_mute_clicked()
{
    if (mediaPlayer->isMuted()) {
        // If already muted, unmute the media player
        mediaPlayer->setMuted(false);
    } else {
        // If not muted, mute the media player
        mediaPlayer->setMuted(true);
    }
}


void menu::on_searchBar_clicked()
{
    QString searchBar = ui->searchLineEdit->text();

    if(searchBar==' '){
        cexceptie exc;
        exc.Wrong();
    }


    requestmusic req(searchBar);

    if (req._request()) {
        this->hide();
        if (music) {
            delete music;
            music = nullptr;
        }

        getmusic MusicData = requestmusic::MusicData;
        // Re-populate the list with new music data
        music = new getmusic(MusicData);
        populateSongList();
    } else {
        cexceptie exc;
        exc.Wrong();
    }


}


void menu::on_pushButton_17_clicked()
{
    ui->groupBox->setVisible(!ui->groupBox->isVisible());
}

