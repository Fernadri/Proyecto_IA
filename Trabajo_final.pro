QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Cuerpotecnico.cpp \
    Equipo.cpp \
    Jugador.cpp \
    elegirformacion.cpp \
    fallo_registrar.cpp \
    formacion433.cpp \
    formacion442.cpp \
    main.cpp \
    mainwindow.cpp \
    registrarse.cpp

HEADERS += \
    Cuerpotecnico.h \
    Equipo.h \
    Jugador.h \
    elegirformacion.h \
    fallo_registrar.h \
    formacion433.h \
    formacion442.h \
    mainwindow.h \
    registrarse.h

FORMS += \
    elegirformacion.ui \
    fallo_registrar.ui \
    formacion433.ui \
    formacion442.ui \
    mainwindow.ui \
    registrarse.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagen/image.qrc

DISTFILES +=
