#-------------------------------------------------
#
# Project created by QtCreator 2019-02-19T13:53:09
#
#-------------------------------------------------
#模块
QT       += core gui

#高于4版本，添加 QT += widgets，为了兼容QT4
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#应用程序的名字
TARGET = 01_qtTest

#指定Makefile的类型，app
TEMPLATE = app

#源文件.cpp文件
SOURCES += main.cpp\
        mywidget.cpp
#头文件 .h文件
HEADERS  += mywidget.h
