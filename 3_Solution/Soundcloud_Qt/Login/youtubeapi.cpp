// youtubeapi.cpp
#include "youtubeapi.h"

YouTubeAPI::YouTubeAPI(QObject *parent) : QObject(parent)
{
    m_networkManager = new QNetworkAccessManager(this);
    // Setează cheia API pentru YouTube
    m_apiKey = "AIzaSyBYKfHVZR5xv3NWbeLVFk21EkqmB-mu1xM";
}

void YouTubeAPI::search(const QString &query)
{
    QUrl url("https://www.googleapis.com/youtube/v3/search");
    QUrlQuery queryUrl;
    queryUrl.addQueryItem("part", "snippet");
    queryUrl.addQueryItem("q", query);
    queryUrl.addQueryItem("key", m_apiKey);

    url.setQuery(queryUrl);

    QNetworkReply *reply = m_networkManager->get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, this, &YouTubeAPI::onSearchReply);
}

void YouTubeAPI::onSearchReply()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray response = reply->readAll();
        // Tratează răspunsul JSON pentru a extrage informațiile necesare
        // Aici ar trebui să folosești o bibliotecă pentru a parsa JSON-ul, de exemplu QJsonDocument
        // În acest exemplu, presupunem că răspunsul este sub formă de JSON simplu
        QList<QVariantMap> results;
        // Adaugă rezultatele în results
        emit searchFinished(results);
    }
    else
    {
        emit searchError(reply->errorString());
    }

    reply->deleteLater();
}
