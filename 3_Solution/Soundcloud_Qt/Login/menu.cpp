#include "menu.h"
#include "ui_menu.h"
#include<QMessageBox>

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu)
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



}

menu::~menu()
{
    delete ui;
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

}

