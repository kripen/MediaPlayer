QT = core gui widgets
TARGET = MediaPlayer
TEMPLATE = app

QT += network xml multimedia
HEADERS += \
    ary2d.h \
    directorytreeview.h \
    filemngwidget.h \
    mainwindow.h \
    player.h \
    playlistmodel.h \
    playlistwidget.h

SOURCES += \
    directorytreeview.cpp \
    filemngwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    playlistmodel.cpp \
    playlistwidget.cpp
