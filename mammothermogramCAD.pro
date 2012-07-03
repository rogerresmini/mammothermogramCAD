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

        CV_INCLUDE = %OPENCV_INCLUDE%
        CV_LIB = %OPENCV_LIB%
}

unix{


}

message(build with opencv 2.4.1)
INCLUDEPATH += $$CV_INCLUDE\opencv
LIBS += -L$$CV_LIB
LIBS += -lopencv_imgproc241 -lopencv_highgui241 -lopencv_core241

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui


