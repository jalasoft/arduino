#include <Arduino.h>
#include "Tone.h"

Tone::Tone(int pin, int frequency=3000) : pin(pin), frequency(frequency) {
  pinMode(pin, OUTPUT);  
}

void Tone::startReproducing() {
  tone(pin, frequency);
}

void Tone::stopReproducing() {
  noTone(pin);
}
