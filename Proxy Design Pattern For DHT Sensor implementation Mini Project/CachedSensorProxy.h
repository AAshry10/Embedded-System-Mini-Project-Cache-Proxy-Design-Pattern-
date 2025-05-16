#ifndef CACHED_SENSOR_PROXY_H
#define CACHED_SENSOR_PROXY_H

#include <Arduino.h>
#include "SensorInterface.h"
#include "SlowSensor.h"

class CachedSensorProxy : public SensorInterface {
  private:
    SlowSensor realSensor;
    float cachedValue;
    unsigned long lastReadTime;
    const unsigned long CACHE_DURATION = 5000; // 5 seconds

  public:
    CachedSensorProxy() : cachedValue(0), lastReadTime(0) {}

    float getTemperature() override {
      unsigned long now = millis();
      if (now - lastReadTime < CACHE_DURATION) {
        return cachedValue;
      } else {
        cachedValue = realSensor.getTemperature();
        lastReadTime = now;
        return cachedValue;
      }
    }
};

#endif