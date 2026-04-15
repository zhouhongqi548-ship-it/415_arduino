#include "OneButton.h"

OneButton ButtonE(39,true);
void ClickE()
  {
    digitalWrite(16,!digitalRead(16));
  }
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(16,OUTPUT);
  ButtonE.attachClick(ClickE);
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonE.tick();
}
