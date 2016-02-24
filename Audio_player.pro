#-------------------------------------------------
#
# Project created by QtCreator 2016-01-13T14:59:56
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET = Audio_player
TEMPLATE = app


SOURCES += src/main.cpp\
        src/player.cpp \
    src/audiofile.cpp \
    src/filescanner.cpp \
    src/library.cpp \
    src/artist.cpp \
    src/album.cpp \
    src/song.cpp

HEADERS  += headers/player.h \
    headers/audiofile.h \
    headers/filescanner.h \
    headers/library.h \
    headers/artist.h \
    headers/album.h \
    headers/song.h

FORMS    += player.ui

INCLUDEPATH += /usr/include/taglib/
DEPENDPATH += /usr/include/taglib/
LIBS += /usr/lib/libtag.so
