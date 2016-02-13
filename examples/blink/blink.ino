#include <DueFastDIO.h>
#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  pinWrite(LED, HIGH);
  delay(1000);
  pinWrite(LED, LOW);
  delay(1000);            
}
