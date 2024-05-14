// youtubeapi.h
#ifndef YOUTUBEAPI_H
#define YOUTUBEAPI_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include<QSslSocket>


class YouTubeAPI : public QObject
{
    Q_OBJECT
public:
    explicit YouTubeAPI(QObject *parent = nullptr);

    void search(const QString &query);

signals:
    void searchFinished(const QList<QVariantMap> &results);
    void searchError(const QString &errorMessage);

private slots:
    void onSearchReply();

private:
    QNetworkAccessManager *m_networkManager;
    QString m_apiKey;
};

#endif // YOUTUBEAPI_H
