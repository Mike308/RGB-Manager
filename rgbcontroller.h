#ifndef RGBCONTROLLER_H
#define RGBCONTROLLER_H
#include <QObject>
#include <3rdparty/qextserialport/src/qextserialport.h>




class RGBController : QObject
{
    Q_OBJECT
public:
    RGBController(QString port_name);
    void setRGB(int r,int g,int b);
    void setHSV(int h,int s,int v);
    void setAnimation(int mode,unsigned long speed,int step);

private:
    QextSerialPort *port;
    void open_serial_port(QString port_name);
    void write_to_serial_port(QString data);


};

#endif // RGBCONTROLLER_H
