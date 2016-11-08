#include <QApplication>
#include <QtQml>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include "headers/qdownloader.h"
#include "headers/mangastream.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator qtTranslator;
    qtTranslator.load(QLocale::system().name(), ":/translations");
    app.installTranslator(&qtTranslator);

    QQmlApplicationEngine engine;
    qmlRegisterType<DownloadImage>("cz.chrastecky.img",1,0,"ImageDownloader");
    qmlRegisterType<MangaStream>("cz.chrastecky.mangastream",1,0,"MangaStream");
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}