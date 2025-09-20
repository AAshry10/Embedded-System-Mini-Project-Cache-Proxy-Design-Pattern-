[README.md](https://github.com/user-attachments/files/22443772/README.md)
# DHT22 Temperature Sensor with Proxy Pattern

## Overview
This Arduino project demonstrates the implementation of the Proxy design pattern for a DHT22 temperature sensor. The project optimizes sensor readings through caching and provides real-time temperature display on an LCD screen.

## Table of Contents
- [Components Required](#components-required)
- [Project Structure](#project-structure)
- [Libraries](#libraries)
- [Features](#features)
- [Circuit Connections](#circuit-connections)
- [Installation](#installation)
- [Simulation](#simulation)
- [Design Pattern Implementation](#design-pattern-implementation)

## Components Required
- Arduino Uno
- DHT22 Temperature & Humidity Sensor
- LCD 1602 Display (16x2 characters)
- Jumper Wires
- Breadboard

## Project Structure
```
├── SensorInterface.h    # Abstract interface for the sensor
├── SlowSensor.h        # Real sensor implementation
├── CachedSensorProxy.h # Proxy implementation with caching
├── SinsorProxyDemo.ino # Main Arduino sketch
└── README.md
```

## Libraries
To run this project, you need to install the following libraries:
- DHT sensor library
- LiquidCrystal

You can install these through the Arduino IDE Library Manager.

## Features
- ✨ Proxy design pattern implementation
- 🔄 5-second caching of temperature readings
- 📟 LCD display output
- 🔌 Serial monitor output (9600 baud)
- ⚡ Optimized sensor reading operations

## Circuit Connections

### DHT22 Sensor Connections
| DHT22 Pin | Arduino Pin |
|-----------|-------------|
| GND       | GND        |
| VCC       | 5V         |
| SDA       | Pin 13     |

### LCD Display Connections
| LCD Pin | Arduino Pin |
|---------|-------------|
| VSS     | GND        |
| VDD     | 5V         |
| V0      | GND        |
| RS      | Pin 12     |
| RW      | GND        |
| E       | Pin 11     |
| D4      | Pin 5      |
| D5      | Pin 4      |
| D6      | Pin 3      |
| D7      | Pin 2      |

## Installation
1. Clone this repository:
```bash
git clone https://github.com/AAshry10/Embedded-System-Mini-Project-Cache-Proxy-Design-Pattern.git
```
2. Open `SinsorProxyDemo.ino` in Arduino IDE
3. Install required libraries
4. Upload the code to your Arduino Uno

## Simulation
Test the project in your browser using Wokwi:
[Live Simulation](https://wokwi.com/projects/431111629844543489)

## Design Pattern Implementation
The Proxy pattern is implemented to:
1. Cache sensor readings for 5 seconds
2. Reduce actual sensor read operations
3. Improve response time for repeated readings

### Pattern Structure
```
SensorInterface (Abstract Class)
    ↑
    |
SlowSensor (Real Subject)
    ↑
    |
CachedSensorProxy (Proxy)
```
