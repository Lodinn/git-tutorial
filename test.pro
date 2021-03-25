TEMPLATE = app

win32:LIBS += -lsetupapi
win32:LIBS += -lPortableDeviceGUIDs

TARGET = tutorial
SOURCES += *.cpp
HEADERS += *.h
