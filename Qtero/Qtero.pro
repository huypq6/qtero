QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# APP CONFIG
TARGET = "Qtero"

QTERO_VERSION="0.1"
VERSION=$${QTERO_VERSION}

# LIBRARIES INCLUDE
include(./debug/debug.prj)
include(./window/window.prj)

# COMPILER CONFIGs
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEFINES += QTERO_VERSION=\"$$QTERO_VERSION\"

SOURCES += \
    main.cpp

HEADERS += \
    main.h

FORMS +=

TRANSLATIONS += \
    en_US.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

