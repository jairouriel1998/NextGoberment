#-------------------------------------------------
#
# Project created by QtCreator 2017-12-16T19:35:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NextGoberment
TEMPLATE = app

LIBS        += -lGL
LIBS        += -L/usr/local/lib -L/usr/lib -lmysqlcppconn
INCLUDEPATH += -I/usr/include -I/usr/local/include
               -I/usr/local/include/cppconn


SOURCES += main.cpp\
        inicio.cpp \
    principal.cpp \
    controller.cpp \
    registrarse.cpp \
    Usuarios.cpp \
    presidenciales.cpp

HEADERS  += inicio.h \
    Alcalde.h \
    Candidato.h \
    Diputados.h \
    Presidencial.h \
    Usuarios.h \
    principal.h \
    controller.h \
    registrarse.h \
    presidenciales.h

FORMS    += inicio.ui \
    principal.ui \
    registrarse.ui \
    presidenciales.ui
