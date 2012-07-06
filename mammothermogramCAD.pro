#-------------------------------------------------
#
# Project created by QtCreator 2012-07-01T15:22:52
#
#-------------------------------------------------

QT       += core gui

TARGET = mammothermogramCAD
TEMPLATE = app


win32{
        ##Definir no path do sistema uma variavel chamada OPENCV_INCLUDE com o caminho dos includes do opencv, por exemplo: C:\OpenCV2.4\build\include
        ##Definir no path do sistema uma variavel chamada OPENCV_LIB com o caminho das libs do opencv, por exemplo: C:\OpenCV2.4\build\x86\vc10\lib

        #CV_INCLUDE = %OPENCV_INCLUDE%
        #CV_LIB = %OPENCV_LIB%

        CV_INCLUDE = "C:\Program Files\OpenCV-2.1.0\include\opencv"
        CV_LIB = "C:\Program Files\OpenCV-2.1.0\build\lib\Debug"
}

message(build with opencv 2.4.1)
INCLUDEPATH += $$CV_INCLUDE
DEPENDPATH += $$CV_INCLUDE
LIBS += -L$$CV_LIB
LIBS += -lcv210d -lcxcore210d -lhighgui210d

SOURCES += main.cpp mainwindow.cpp \
    thermogram.cpp
HEADERS  += mainwindow.h \
    thermogram.h
FORMS    += mainwindow.ui

