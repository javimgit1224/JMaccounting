#-------------------------------------------------
#
# Project created by QtCreator 2018-04-25T10:52:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JMaccounting
TEMPLATE = app


SOURCES += main.cpp\
        jmaccounting.cpp \
    expense.cpp

HEADERS  += jmaccounting.h \
    expense.h

FORMS    += jmaccounting.ui \
    expense.ui
