#-------------------------------------------------
#
# Project created by QtCreator 2015-04-16T10:36:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = probleme
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    participant.cpp \
    utilisateur.cpp \
    configregate.cpp \
    regate.cpp \
    mytime.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    participant.h \
    utilisateur.h \
    configregate.h \
    regate.h \
    mytime.h \
    dialog.h

FORMS    += mainwindow.ui \
    participant.ui \
    configregate.ui \
    regate.ui \
    dialog.ui

RESOURCES += \
    img.qrc

DISTFILES +=
