QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    based.cpp \
    blokcil.cpp \
    gidroperedacha.cpp \
    korobper.cpp \
    main.cpp \
    mainwindow.cpp \
    peredos.cpp \
    vbor.cpp \
    zakazvmagaz.cpp

HEADERS += \
    based.h \
    blokcil.h \
    gidroperedacha.h \
    korobper.h \
    mainwindow.h \
    peredos.h \
    vbor.h \
    zakazvmagaz.h

FORMS += \
    based.ui \
    blokcil.ui \
    gidroperedacha.ui \
    korobper.ui \
    mainwindow.ui \
    peredos.ui \
    vbor.ui \
    zakazvmagaz.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
