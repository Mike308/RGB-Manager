#-------------------------------------------------
#
# Project created by QtCreator 2016-12-23T21:02:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RGBController
include(3rdparty/qextserialport/src/qextserialport.pri)
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rgbcontroller.cpp


HEADERS  += mainwindow.h \
    rgbcontroller.h


FORMS    += mainwindow.ui
