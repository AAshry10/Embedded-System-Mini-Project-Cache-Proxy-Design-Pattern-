#ifndef SLOW_SENSOR_H
#define SLOW_SENSOR_H

#include <DHT.h>
#include "SensorInterface.h"

#define DHTPIN 13      // Digital pin connected to the DHT22 (SDA in WOKWI)
#define DHTTYPE DHT22  // DHT 22 (AM2302)

class SlowSensor : public SensorInterface {
    DHT dht;
  public:
    SlowSensor() : dht(DHTPIN, DHTTYPE) {
      dht.begin();
    }
    float getTemperature() override {
      delay(1000); // DHT22 needs 5 seconds between reads
      return 20.0 + random(0, 100) / 10.0;
    }
};

#endif