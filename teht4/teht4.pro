TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bankaccount.cpp \
        client.cpp \
        creditaccount.cpp \
        main.cpp

HEADERS += \
    bankaccount.h \
    client.h \
    creditaccount.h
