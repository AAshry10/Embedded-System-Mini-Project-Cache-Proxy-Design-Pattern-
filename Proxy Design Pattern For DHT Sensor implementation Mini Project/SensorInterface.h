#ifndef SENSOR_INTERFACE_H
#define SENSOR_INTERFACE_H

#include <Wire.h>
#include <DHT.h>

#define DHTPIN 13
#define DHTTYPE DHT22

class SensorInterface {
  public:
    virtual float getTemperature() = 0;
};


#endif