#include "BeepLight.h"

BeepLight* light1;
BeepLight* light2;
BeepLight* light3;

void setup() {
  light1 = new BeepLight(3, 2, 1000, 3000);
  light2 = new BeepLight(4, 2, 1000, 4000);
  light3 = new BeepLight(5, 2, 1000, 5000);

  pinMode(9, INPUT);
}

void loop() {

  int status = digitalRead(9);
  if (status == LOW) {
    return;
  }
  
  light1->perform();
 // delay(10);
  light2->perform();
 // delay(10);
  light3->perform();
 // delay(10);
  light1->minusDelay(20);
  light2->minusDelay(20);
  light3->minusDelay(20);
}
