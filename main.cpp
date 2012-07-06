#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QtGui>

#include <cv.h>
#include <highgui.h>
#include <cxcore.h>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    //IplImage *thermal = cvLoadImage("C:\\Users\\Tiago Bonini\\Documents\\Visual Studio 2010\\Projects\\GitHub\\mammothermogramCAD-build-desktop-Qt_4_8_0_for_Desktop_-_MSVC2010__Qt_SDK__Release\\release\\IR_0096.jpg");
    //QImage* img = new QImage;
    //QLabel imageLabel("teste", &w);
    //thermal = cvLoadImage("IR_0096.jpg", 1);

    //cvNamedWindow("Teste", 1);
    //cvShowImage("Teste",thermal);

    //img->load("C:\\Users\\Tiago Bonini\\Documents\\Visual Studio 2010\\Projects\\GitHub\\mammothermogramCAD-build-desktop-Qt_4_8_0_for_Desktop_-_MSVC2010__Qt_SDK__Release\\release\\IR_0096.jpg");

    //thermal = QImage2IplImage(img);
    //img = IplImage2QImage(thermal);
    //*img = QImage((const unsigned char*)(thermal->imageData), thermal->width, thermal->height,QImage::Format_RGB888).rgbSwapped();

    //imageLabel.setPixmap(QPixmap::fromImage(*img));
    //imageLabel.setGeometry(20,20,640,480);
   // QVBoxLayout *vbl = new QVBoxLayout(&w);
   // vbl->addWidget(&imageLabel);

    w.show();

    return a.exec();
}
