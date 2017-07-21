#include <CapacitiveSensor.h>

const int comparationValue = 30;
const int inputPin = 2;
const int buzzerPin = 10;
const int note1 = 262;
const int note2 = 294;
const int note3 = 330;
const int note4 = 350;
const int note5 = 392;
long sensorValue1 = 0;
long sensorValue2 = 0;
long sensorValue3 = 0;
long sensorValue4 = 0;
long sensorValue5 = 0;

CapacitiveSensor capSensor1 = CapacitiveSensor(inputPin,4);
CapacitiveSensor capSensor2 = CapacitiveSensor(inputPin,5);
CapacitiveSensor capSensor3 = CapacitiveSensor(inputPin,6);
CapacitiveSensor capSensor4 = CapacitiveSensor(inputPin,7);
CapacitiveSensor capSensor5 = CapacitiveSensor(inputPin,8);

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  sensorValue1 = capSensor1.capacitiveSensor(30);
  sensorValue2 = capSensor2.capacitiveSensor(30);
  sensorValue3 = capSensor3.capacitiveSensor(30);
  sensorValue4 = capSensor4.capacitiveSensor(30);
  sensorValue5 = capSensor5.capacitiveSensor(30);

 if(sensorValue1 > comparationValue){
  Serial.println("First sensor");
 }
 
 if(sensorValue2 > comparationValue){
  Serial.println("Second sensor");
 }
  
 if(sensorValue3 > comparationValue){
  Serial.println("Third sensor");
 }
 
 if(sensorValue4 > comparationValue){
  Serial.println("Fourth sensor");
 }
 
 if(sensorValue5 > comparationValue){
  Serial.println("Fifth sensor");
 }

}
