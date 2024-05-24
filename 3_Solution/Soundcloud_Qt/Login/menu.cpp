#include "menu.h"
#include "ui_menu.h"
#include<QMessageBox>
#include<getmusic.h>
#include"cexceptie.h"
#include"requestmusic.h"
#include <QVBoxLayout>
#include"songwidget.h"
#include <QFileDialog>
#include<QProcess>
#include<QTime>


void playYoutubeAudio(const QString &youtubeUrl) {
    QProcess process;
    QStringList arguments;
    arguments << "--extract-audio" << "--audio-format" << "mp3" << "--get-url" << youtubeUrl;
    process.start("youtube-dl", arguments);
    process.waitForFinished(-1);
    QString result = process.readAllStandardOutput().trimmed();
    qDebug() << "URL-ul audio este:" << result;
}


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
    connect(ui->searchBar,&QPushButton::clicked, this, &menu::on_searchBar_clicked);


    ui->play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->back->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->next->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->volume->setMaximum(1);
    ui->volume->setMaximum(100);
    ui->volume->setValue(30);

    mediaPlayer->setVolume(ui->volume->value());
    connect(mediaPlayer,&QMediaPlayer::durationChanged,this,&menu::durationChanged);
    connect(mediaPlayer,&QMediaPlayer::positionChanged,this,&menu::positionChanged);
    ui->groupBox->setVisible(false);
    ui->searchLineEdit->setPlaceholderText("Search Music");
    ui->horizontalSlider->setRange(0,mediaPlayer->duration()/1000);

    songsLayout = new QVBoxLayout;
    songsLayout->setSpacing(2);
    ui->scrollArea->setLayout(songsLayout);
}

menu::~menu()
{
    delete ui;
}

void menu::updateduration(qint64 duration)
{
    QString timestr;
    if (duration || Mduration)
    {

        QTime currentTime((duration / 3600)%60,(duration / 60) % 60,duration % 60,(duration * 1000) % 1000);
        QTime totalTime((Mduration / 3600)%60,(Mduration/60)%60,Mduration%60,(Mduration*1000)%1000);
        QString format="mm:ss";
        if(Mduration>3600)
        {
            format="hh:mm:ss";
        }
        ui->label_3->setText(currentTime.toString(format));
        ui->label_4->setText(totalTime.toString(format));

    }
}



void menu::durationChanged(qint64 duration)
{
    Mduration=duration/1000;
    ui->horizontalSlider->setMaximum(Mduration);

}

void menu::positionChanged(qint64 progress)
{
    if (!ui->horizontalSlider->isSliderDown())
    {
        ui->horizontalSlider->setValue(progress/1000);
    }
    updateduration(progress/1000);

}

void menu::populateSongList()
{

    qDebug() << "Populating song list...";

    QLayout *existingLayout = ui->searchWidgetList->layout();
    if (existingLayout) {
        QLayoutItem* item;
        while ((item = existingLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete existingLayout;
    }

    QVBoxLayout *layout = new QVBoxLayout(ui->searchWidgetList);
    ui->searchWidgetList->setLayout(layout);


    for (size_t i = 0; i < music->song_name().size(); ++i) {
        qDebug() << "Adding song: " << music->song_name()[i];
        SongWidget *songWidget = new SongWidget(music->song_name()[i], music->url()[i], this);
        connect(songWidget, &SongWidget::clicked, this, &menu::onSongWidgetClicked);
        layout->addWidget(songWidget);
    }
}

void menu::onSongWidgetClicked(const QString &url)
{
    qDebug() << "Song widget clicked, URL: " << url;
    playYoutubeAudio(url);
    // mediaPlayer->setMedia(QUrl(url));
    // mediaPlayer->play();
}

void menu::on_pushButton_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}


void menu::updateSliderPosition(qint64 position)
{
    ui->horizontalSlider->setValue(position);
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



void menu::on_next_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()+10);
    mediaPlayer->setPosition(ui->horizontalSlider->value()*1000);
}


void menu::on_back_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()-10);
    mediaPlayer->setPosition(ui->horizontalSlider->value()*1000);
}


void menu::on_mute_clicked()
{
    if (is_mute==false)
    {
        ui->mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        is_mute=true;
        mediaPlayer->setMuted(true);
    }
    else
    {
        ui->mute->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        is_mute =false;
        mediaPlayer->setMuted(false);
    }
}


void menu::on_searchBar_clicked()
{
    QString searchBar = ui->searchLineEdit->text().trimmed();

    if (searchBar.isEmpty()) {
        cexceptie exc;
        exc.Wrong();
        return;
    }

    requestmusic req(searchBar);

    if (req._request()) {
        delete music;
        music = new getmusic(requestmusic::MusicData);
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


void menu::on_upload_clicked()
{
    QString initialPath = QDir::toNativeSeparators("C:/Users/condu/Desktop/Qt/Login/Songs");
    qDebug() << "Initial path for file dialog: " << initialPath;

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Audio File"), initialPath, tr("Audio Files (*.mp3 *.wav *.ogg)"));
    qDebug() << "Selected file: " << fileName;


    if (!fileName.isEmpty()) {

        QFileInfo fileInfo(fileName);
        loadedSongs.append({fileInfo.fileName(), fileName});


        updateSongListUI();


        mediaPlayer->setMedia(QUrl::fromLocalFile(fileName));
        ui->name->setText(fileInfo.fileName());
    }

    // mediaPlayer->setMedia(QUrl::fromLocalFile(fileName));
    // qDebug() << "Media set for file: " << fileName;
    // QFileInfo fileinfo(fileName);
    // ui->name->setText(fileinfo.fileName());

}


void menu::updateSongListUI()
{

    QLayoutItem* item;
    while ((item = songsLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }


    for (const Song& song : loadedSongs) {
        QPushButton* songButton = new QPushButton(song.name, this);
        connect(songButton, &QPushButton::clicked, [this, song]() {
            mediaPlayer->setMedia(QUrl::fromLocalFile(song.filePath));
            mediaPlayer->play();
            ui->name->setText(song.name);
        });
        songsLayout->addWidget(songButton);
    }
     ui->scrollArea->setMinimumSize(songsLayout->sizeHint());
}


void menu::on_volume_valueChanged(int value)
{
    mediaPlayer->setVolume(value);
}


void menu::on_horizontalSlider_valueChanged(int value)
{
    mediaPlayer->setPosition(value*1000);
}


void menu::on_pause_clicked()
{
    mediaPlayer->pause();
}


void menu::on_play_clicked()
{
    mediaPlayer->play();
}

