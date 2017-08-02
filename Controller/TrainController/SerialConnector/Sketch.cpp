/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

int firstSensor = 0;    // first analog sensor
int secondSensor = 0;   // second analog sensor
int thirdSensor = 0;    // digital sensor
int inByte = 0;         // incoming serial byte

void setup() {
  // start serial port at 9600 bps:
  SerialUSB.begin(9600);
  while (!SerialUSB) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

}

void loop() {
  // if we get a valid byte, read analog ins:
  if (SerialUSB.available() > 0) {
  
  }
}