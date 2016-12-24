#include "rgbcontroller.h"

RGBController::RGBController(QString port_name)
{
    this->open_serial_port(port_name);
}

void RGBController::open_serial_port(QString port_name){

      this->port = new QextSerialPort(port_name, QextSerialPort::EventDriven);
      port->setBaudRate(BAUD9600);
      port->setFlowControl(FLOW_OFF);
      port->setParity(PAR_NONE);
      port->setDataBits(DATA_8);
      port->setStopBits(STOP_1);
      port->open(QIODevice::ReadWrite);

}

void RGBController::write_to_serial_port(QString data){

    data.append( "\r\n");
    QByteArray bytes_to_send = data.toLocal8Bit();
    port->write(bytes_to_send);

}

void RGBController::setRGB(int r, int g, int b){
    QString r_str = QString::number(r);
    QString g_str = QString::number(g);
    QString b_str = QString::number(b);
    write_to_serial_port("2^"+r_str+"^"+g_str+"^"+b_str);


}

void RGBController::setHSV(int h, int s, int v){

    QString h_str = QString::number(h);
    QString s_str = QString::number(s);
    QString v_str = QString::number(v);
    write_to_serial_port("1^"+h_str+"^"+s_str+"^"+v_str);


}



void RGBController::setAnimation(int mode, unsigned long speed, int step){






}

