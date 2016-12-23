#ifndef RGBCONTROLLER_H
#define RGBCONTROLLER_H
#include <QObject>




class RGBController : QObject
{
    Q_OBJECT
public:
    RGBController();
    void setRGB(int r,int g,int b);
    void setHSV(int h,int s,int v);
    void setAnimation(int mode,unsigned long speed,int step);

};

#endif // RGBCONTROLLER_H
