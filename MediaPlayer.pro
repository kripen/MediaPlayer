QT = core gui widgets
TARGET = MediaPlayer
TEMPLATE = app

QT += network xml multimedia
HEADERS += \
    ary2d.h \
    directorytreeview.h \
    filemngwidget.h \
    mainwindow.h \
    playerwidget.h \
    playlist.h \
    playlistmodel.h \
    playlistwidget.h

SOURCES += \
    directorytreeview.cpp \
    filemngwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    playerwidget.cpp \
    playlist.cpp \
    playlistmodel.cpp \
    playlistwidget.cpp
