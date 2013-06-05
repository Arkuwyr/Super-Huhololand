TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lsfml-graphics -lsfml-window -lsfml-system
INCLUDEPATH += /usr/include

SOURCES += main.cpp \
    src/classcontroll.cpp \
    src/animation.cpp \
    src/rendermanager.cpp \
    src/statemachine.cpp \
    src/eventmanager.cpp

HEADERS += \
    src/classcontroll.h \
    src/animation.h \
    src/rendermanager.h \
    src/statemachine.h \
    src/eventmanager.h
