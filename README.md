DHT22 Temperature Sensor with Proxy Pattern
This Arduino project demonstrates the Proxy design pattern implementation for a DHT22 temperature sensor. The project uses caching to optimize sensor readings and displays the temperature on an LCD screen.

Components
Arduino Uno
DHT22 Temperature & Humidity Sensor
LCD 1602 Display (16x2 characters)
Project Structure
SensorInterface.h - Abstract interface for the sensor
SlowSensor.h - Real sensor implementation
CachedSensorProxy.h - Proxy implementation with caching
SinsorProxyDemo.ino - Main Arduino sketch
Required Libraries
Features
Implements Proxy design pattern for sensor readings
5-second caching of temperature readings
LCD display output
Serial monitor output (9600 baud)
Circuit Connections
DHT22 Sensor
GND → Arduino GND
VCC → Arduino 5V
SDA → Arduino Pin 13
LCD Display
VSS → Arduino GND
VDD → Arduino 5V
V0 → Arduino GND
RS → Arduino Pin 12
RW → Arduino GND
E → Arduino Pin 11
D4 → Arduino Pin 5
D5 → Arduino Pin 4
D6 → Arduino Pin 3
D7 → Arduino Pin 2
Simulation
You can simulate this project on Wokwi using the following link: https://wokwi.com/projects/431111629844543489

Design Pattern Implementation
The project uses the Proxy pattern to:

Cache sensor readings for 5 seconds
Reduce actual sensor read operations
Improve response time for repeated readings
