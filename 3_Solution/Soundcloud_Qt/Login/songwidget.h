#ifndef SONGWIDGET_H
#define SONGWIDGET_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QPixmap>

class SongWidget : public QWidget {
    Q_OBJECT

public:
    SongWidget(const QString &name, const QString &url, QWidget *parent = nullptr);

signals:
    void clicked(const QString &url);

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    QString songName;
    QString songUrl;
};

#endif // SONGWIDGET_H
