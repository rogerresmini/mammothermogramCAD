#ifndef THERMOGRAM_H
#define THERMOGRAM_H

#include <QObject>
#include <QPixmap>

#include <cv.h>
#include <highgui.h>
#include <cxcore.h>

class Thermogram
{
public:
    Thermogram();
    QImage*  Thermogram::IplImage2QImage(IplImage *iplImg);
    IplImage* Thermogram::QImage2IplImage(QImage *qimg);
};

#endif // THERMOGRAM_H
