TEMPLATE = app

win32:LIBS += -lsetupapi
win32:LIBS += -lPortableDeviceGUIDs

TARGET = tutorial
SOURCES += *.cpp
HEADERS += *.h

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
QMAKE_CXX_FLAGS += /EHa
