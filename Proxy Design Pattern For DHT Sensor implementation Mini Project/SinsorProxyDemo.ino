
#include <Arduino.h>
#include "CachedSensorProxy.h"
#include "LiquidCrystal.h"

CachedSensorProxy sensor;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Temp : ");
}

void loop() {
  float temp = sensor.getTemperature();
  Serial.print("Temp : ");
  Serial.println(temp);
  lcd.setCursor(0, 1); // Second row
  lcd.print("      "); // Clear previous value
  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.print(" C");
  delay(1000);
}