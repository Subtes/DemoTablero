TEMPLATE = app

TARGET = main

QT += core gui widgets xml qml quickwidgets

SOURCES += botonerahombremuerto.cpp \
    botonerapuerta.cpp \
    tablero.cpp \
    velocimetro.cpp \
    main.cpp

RESOURCES += \
    tablero.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =
# Default rules for deployment.
#include(deployment.pri)

HEADERS += botonerahombremuerto.h \
    botonerapuerta.h \
    tablero.h \
    velocimetro.h

FORMS += botonerahombremuerto.ui \
    botonerapuerta.ui \
    tablero.ui \
    velocimetro.ui \

DISTFILES += \
    BotoneraHombreMuerto.qml \
    BotoneraPuerta.qml \
    Velocimetro.qml

RESOURCES +=
