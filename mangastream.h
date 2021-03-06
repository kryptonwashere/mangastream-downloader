#ifndef MANGASTREAM_H
#define MANGASTREAM_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QRegularExpression>

class MangaStream : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE QStringList getListOfManga();
    Q_INVOKABLE QStringList getListOfChapters(QString url);
    Q_INVOKABLE QStringList getImages(QString url);

private:
    QString getContentOfUrl(QString url);
    const QString httpHost = "https://readms.net";
};

#endif // MANGASTREAM_H
