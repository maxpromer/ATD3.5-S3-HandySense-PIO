#include <Arduino.h>
#include "Sensor.h"
#include "User_Select.h"

// include your sensor library
#include <Wire.h>

#if TEMP_HUMID_SENSOR == SHT20
#include <SHT2x.h>
#elif TEMP_HUMID_SENSOR == SHT30
#include <ArtronShop_SHT3x.h>
#elif TEMP_HUMID_SENSOR == SHT45
#include <ArtronShop_SHT45.h>
#endif

#if LIGHT_SENSOR == BH1750
#include <ArtronShop_BH1750.h>
#endif

#define SOIL_PIN (1) // A1 pin

#if TEMP_HUMID_SENSOR == SHT20
SHT2x sht;
#elif TEMP_HUMID_SENSOR == SHT30
ArtronShop_SHT3x sht3x(SHT30_ADDR, &Wire); // ADDR: 0 => 0x44, ADDR: 1 => 0x45
#elif TEMP_HUMID_SENSOR == SHT45
ArtronShop_SHT45 sht45(&Wire, 0x44); // SHT45-AD1B => 0x44
#endif

#if LIGHT_SENSOR == BH1750
ArtronShop_BH1750 bh1750(BH1750_ADDR); // Non Jump ADDR: 0x23, Jump ADDR: 0x5C
#endif

void Sensor_init() { // Setup sensor (like void setup())
  Wire.begin();
#if TEMP_HUMID_SENSOR == SHT20
  if (!sht.begin()) {
    Serial.println("SHT2x not found !");
  }
#elif TEMP_HUMID_SENSOR == SHT30
  if (!sht3x.begin()) {
    Serial.println("SHT3x not found !");
  }
#elif TEMP_HUMID_SENSOR == SHT45
  if (!sht45.begin()) {
    Serial.println("SHT45 not found !");
  }
#endif

#if LIGHT_SENSOR == BH1750
  if (!bh1750.begin()) {
    Serial.println("BH1750 not found !");
  }
#endif
} 

bool Sensor_getTemp(float * value) { // Get Temperature from sensor in °C unit
#if TEMP_HUMID_SENSOR == SHT20
  sht.read();
  *value = sht.getTemperature();
#elif TEMP_HUMID_SENSOR == SHT30
  if (!sht3x.measure()) {
    return false;
  }
  *value = sht3x.temperature();
#elif TEMP_HUMID_SENSOR == SHT45
  if (!sht45.measure()) {
    return false;
  }
  *value = sht45.temperature();
#endif

  return true;
} 

bool Sensor_getHumi(float * value) { // Get Humidity from sensor in %RH unit
#if TEMP_HUMID_SENSOR == SHT20
  // sht.read();
  *value = sht.getHumidity();
#elif TEMP_HUMID_SENSOR == SHT30
  /* if (!sht3x.measure()) {
    return false;
  } */
  *value = sht3x.humidity();
#elif TEMP_HUMID_SENSOR == SHT45
  /* if (!sht45.measure()) {
    return false;
  } */
  *value = sht45.humidity();
#endif

  return true;
} 


bool Sensor_getSoil(float * value) { // Get Soil moisture from sensor in % unit
#if SOIL_SENSOR == ANALOG_SOIL_SENSOR
  *value = map(analogRead(SOIL_PIN), SOIL_ANALOG_MIN, SOIL_ANALOG_MAX, 0, 100);
  *value = constrain(*value, 0, 100);
#endif

  return true;
} 

bool Sensor_getLight(float * value) { // Get Light from sensor in lux uint
#if LIGHT_SENSOR == BH1750
  *value = bh1750.light();
  if (*value < 0) {
    return false;
  }
#endif

  return true;
}