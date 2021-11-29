#include <AltSoftSerial.h>
AltSoftSerial RadioTx;
int pot = A2;

void setup() {
  Serial.begin(9600);
  RadioTx.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  int val = map(analogRead(pot), 0, 1023, 0, 255);
  RadioTx.write(val);
}
