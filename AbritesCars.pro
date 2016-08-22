#-------------------------------------------------
#
# Project created by QtCreator 2016-08-20T16:12:24
#
#-------------------------------------------------

QT       += core gui
QT       += core
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AbritesCars
TEMPLATE = app


SOURCES += main.cpp\
        mainview.cpp \
    sqldriver.cpp \
    smtpdriver.cpp \
    smtp.cpp \
    sendthread.cpp

HEADERS  += mainview.h \
    sqldriver.h \
    smtpdriver.h \
    smtp.h \
    sendthread.h

FORMS    += mainview.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resources.qrc

