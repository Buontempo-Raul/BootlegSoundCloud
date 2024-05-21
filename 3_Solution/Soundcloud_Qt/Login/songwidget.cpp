#include "SongWidget.h"

SongWidget::SongWidget(const QString &name, const QString &thumbnail, const QString &url, QWidget *parent)
    : QWidget(parent), songName(name), songUrl(url) {
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *nameLabel = new QLabel(name, this);
    layout->addWidget(nameLabel);

    QLabel *thumbnailLabel = new QLabel(this);
    QPixmap pixmap(thumbnail);
    thumbnailLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
    layout->addWidget(thumbnailLabel);
}

void SongWidget::mousePressEvent(QMouseEvent *event) {
    emit clicked(songUrl);
}
