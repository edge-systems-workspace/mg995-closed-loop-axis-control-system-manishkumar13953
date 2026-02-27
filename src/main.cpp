#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author MANISH_KUMAR
 * @date 2026-02-09
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */
#include <Servo.h>

Servo s;

int pos;

void setup()
{
  s.attach(9);
}

void loop()
{
  for (pos = 0; pos <= 180; pos++)
  {
    s.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 0; pos--)
  {
    s.write(pos);
    delay(15);
  }
}

