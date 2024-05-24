#include "SongWidget.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>

SongWidget::SongWidget(const QString &name, const QString &url, QWidget *parent)
    : QWidget(parent), songName(name), songUrl(url) {
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *nameLabel = new QLabel(name, this);
    layout->addWidget(nameLabel);
}

void SongWidget::mousePressEvent(QMouseEvent *event) {
    emit clicked(songUrl);
}
