#include <MicroMetro.h>

MicroMetro metro = MicroMetro(1000000);

const int LED = 13;
bool sw;

void setup() {
  pinMode(LED,OUTPUT);
  sw = false;
  digitalWrite(LED, sw);
}

void loop() {
  if(metro.bang()) {
    sw = !sw;
  }

  digitalWrite(LED, sw);
}
