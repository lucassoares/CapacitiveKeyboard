#include <CapacitiveSensor.h>

const int comparationValue = 30;
const int inputPin = 2;
const int buzzerPin = 10;
const int note1 = 262;
const int note2 = 294;
const int note3 = 330;
const int note4 = 350;
const int note5 = 392;
const int note6 = 440;
const int note7 = 494;
long sensorValue1 = 0;
long sensorValue2 = 0;
long sensorValue3 = 0;
long sensorValue4 = 0;
long sensorValue5 = 0;
long sensorValue6 = 0;
long sensorValue7 = 0;

CapacitiveSensor capSensor1 = CapacitiveSensor(inputPin,3);
CapacitiveSensor capSensor2 = CapacitiveSensor(inputPin,4);
CapacitiveSensor capSensor3 = CapacitiveSensor(inputPin,5);
CapacitiveSensor capSensor4 = CapacitiveSensor(inputPin,6);
CapacitiveSensor capSensor5 = CapacitiveSensor(inputPin,7);
CapacitiveSensor capSensor6 = CapacitiveSensor(inputPin,8);
CapacitiveSensor capSensor7 = CapacitiveSensor(inputPin,9);

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
  sensorValue6 = capSensor6.capacitiveSensor(30);
  sensorValue7 = capSensor7.capacitiveSensor(30);

 if(sensorValue1 > comparationValue){
  Serial.println("First sensor");
  BuzzerSound(note1);
 }
 
 else if(sensorValue2 > comparationValue){
  Serial.println("Second sensor");
  BuzzerSound(note2);
 }
  
 else if(sensorValue3 > comparationValue){
  Serial.println("Third sensor");
  BuzzerSound(note3);
 }
 
 else if(sensorValue4 > comparationValue){
  Serial.println("Fourth sensor");
  BuzzerSound(note4);
 }
 
 else if(sensorValue5 > comparationValue){
  Serial.println("Fifth sensor");
  BuzzerSound(note5);
 }
 else if(sensorValue6 > comparationValue){
  Serial.println("Sixth sensor");
  BuzzerSound(note6);  
 }
 else if(sensorValue7 > comparationValue){
  Serial.println("Seventh sensor");
  BuzzerSound(note7);
 }
  else{
    noTone(buzzerPin);
  }
}


void BuzzerSound(int note){
  tone(buzzerPin,note);
}

