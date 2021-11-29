#include <AltSoftSerial.h>
AltSoftSerial RadioRx;
int LED = 3;

void setup() {
  Serial.begin(9600);
  RadioRx.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (RadioRx.available()) {
    Serial.println("radio found");
  }
  else {
    Serial.println("radio not found");
  }
  while (RadioRx.available()) {
    int val = RadioRx.read(); 
    Serial.println(RadioRx.read());
    analogWrite(LED, val);
  }
}
