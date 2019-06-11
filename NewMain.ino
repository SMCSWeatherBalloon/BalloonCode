

#include <DS18B20.h>

#include <ULP.h>

#include <SoftwareSerial.h>
#include <Wire.h>

#include <Adafruit_MPRLS.h>

#include <OneWire.h>
#include <DallasTemperature.h>

DS18B20 temp(4);

Adafruit_MPRLS pressure(-1, -1); 

//SoftwareSerial aprs(8, 9);

void setup() {
  Serial.begin(9600);
  Serial.println("Ready");
  Wire.begin();
 
  Serial.println("Ready");
  pressure.begin();
  Serial.println("Ready");
}

void loop() {


  Serial.print(temp.getTemp());
  Serial.print(",");
 Serial.print(pressure.readPressure());
 

  Serial.println();
  
}
