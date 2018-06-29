#-------------------------------------------------
#
# Project created by QtCreator 2018-06-24T13:44:20
#
#-------------------------------------------------

CONFIG += console

QT += core
QT += gui
QT += widgets

QT += core_private
QT += gui_private
QT += widgets_private

QMAKE_CFLAGS *= -std=c11
DEFINES *= QT_BUILD_INTERNAL

TARGET = Draw
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        MainWindow.cpp \
    ListView.cpp \
    ListViewItemDelegate.cpp

HEADERS += \
        MainWindow.hpp \
    ListView.hpp \
    ListViewItemDelegate.hpp

FORMS += \
        MainWindow.ui

SOURCES +=sstd_qtextdocumentlayout.cpp
HEADERS +=sstd_qtextdocumentlayout_p.h

SOURCES +=GifTextObject.cpp
HEADERS +=GifTextObject.hpp
