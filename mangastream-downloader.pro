system(lupdate mangastream-downloader.pro)
system(lrelease mangastream-downloader.pro)

TEMPLATE = app

QT += qml quick widgets

CONFIG += c++11

SOURCES += sources/main.cpp \
    sources/qdownloader.cpp \
    sources/mangastream.cpp \
    sources/misctools.cpp

RESOURCES += qml.qrc \
    translations.qrc

TRANSLATIONS += translations/cs_CZ.ts

QML_IMPORT_PATH =

include(deployment.pri)

HEADERS += \
    headers/qdownloader.h \
    headers/mangastream.h \
    headers/misctools.h

lupdate_only {
    SOURCES += qml/*.qml
}
