#-------------------------------------------------
#
# Project created by QtCreator 2012-11-02T17:27:25
#
#-------------------------------------------------

QT       += core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#QT       += gui
Debug:   TARGET = GitlEvtBusd
Release: TARGET = GitlEvtBus

DESTDIR = $${OUT_PWD}/..

CONFIG   += console
CONFIG   -= app_bundle
CONFIG += staticlib
TEMPLATE = lib
#TEMPLATE = app

SOURCES += \
    gitlevent.cpp \
    gitleventbus.cpp \
    gitlevtdata.cpp \
    gitlmodualdelegate.cpp \
    gitlmodual.cpp

HEADERS += \
    gitldef.h \
    gitlevent.h \
    gitleventbus.h \
    gitlmodual.h \
    gitlevtdata.h \
    gitlmodualdelegate.h
