#include "Light.h"
#include <Arduino.h>

Light::Light(int p_pin, int p_delayMillis) : pin(p_pin), delayMillis(p_delayMillis) {
  pinMode(pin, OUTPUT);
}

void Light::perform() {
  digitalWrite(pin, HIGH);
  delay(delayMillis);
  digitalWrite(pin, LOW);
}

void Light::minusDelay(int millis) {
  int newDelay = delayMillis - millis;
  int resultDelay = newDelay < 20 ? delayMillis : newDelay;

  delayMillis = resultDelay;
}

Light Light::operator+(int millis) {
  Light newLight(pin, delayMillis + millis);
  return newLight;
}

Light Light::operator-(int millis) {
  int newDelay = delayMillis - millis;
  int resultDelay = newDelay < 20 ? delayMillis : newDelay;
   
  Light newLight(pin, resultDelay);
  return newLight;
}
