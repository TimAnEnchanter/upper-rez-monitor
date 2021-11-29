#include <CapacitiveSensor.h>

const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

int threshold = 300;
int timeout = 20;

CapacitiveSensor lowPoint = CapacitiveSensor(3, 2);
CapacitiveSensor midPoint = CapacitiveSensor(5, 4);
CapacitiveSensor highPoint = CapacitiveSensor(10, 8);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Taking each sensorʼs measure.
  unsigned int lowVal = constrain(lowPoint.capacitiveSensor(timeout), -5, 1000);
  lowVal > threshold ? digitalWrite(ledPin1, HIGH) : digitalWrite(ledPin1, LOW);
    Serial.print(lowVal);
    Serial.print("  :  ");
  unsigned int midVal = constrain(midPoint.capacitiveSensor(timeout), -5, 1000);
  midVal > threshold ? digitalWrite(ledPin2, HIGH) : digitalWrite(ledPin2, LOW);
    Serial.print(midVal);
    Serial.print("  :  ");
  unsigned int highVal = constrain(highPoint.capacitiveSensor(timeout), -5, 1000);
  highVal > threshold ? digitalWrite(ledPin3, HIGH) : digitalWrite(ledPin3, LOW);
    Serial.print(highVal);
    Serial.println("  :  ");

  delay(100);
  
  //report if contact is made to the LEDs.
 
 

  //report the water level to the serial port.
  if (highVal > threshold) {
    Serial.println ("The Water Level is High");
  }
  else if (midVal > threshold) {
    Serial.println ("The Water Level is Medium");
  }
  else if (lowVal > threshold) {
    Serial.println("The Water Level is Low");
  }
  else {
    Serial.println("The Water Level is Empty");
  }

}
