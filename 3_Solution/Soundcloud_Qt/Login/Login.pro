QT       += core gui
QT += network
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cexceptie.cpp \
    cuser.cpp \
    getmusic.cpp \
    iexceptie.cpp \
    irequest.cpp \
    iuser.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    normaluser.cpp \
    requestlogin.cpp \
    requestmusic.cpp \
    requestsignup.cpp \
    signup.cpp \
    songwidget.cpp \
    tcpclient.cpp

HEADERS += \
    cexceptie.h \
    cuser.h \
    getmusic.h \
    iexceptie.h \
    irequest.h \
    iuser.h \
    mainwindow.h \
    menu.h \
    normaluser.h \
    requestlogin.h \
    requestmusic.h \
    requestsignup.h \
    signup.h \
    songwidget.h \
    tcpclient.h

FORMS += \
    mainwindow.ui \
    menu.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    beg.qrc \
    beg.qrc
