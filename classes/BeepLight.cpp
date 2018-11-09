#include "BeepLight.h"

BeepLight::BeepLight(int lightPin, int tonePin, int delayMillis, int toneFrequency) : light(lightPin, delayMillis), toone(tonePin, toneFrequency) {
  
}

void BeepLight::perform() {
  toone.startReproducing();
  light.perform();
  toone.stopReproducing();
}

void BeepLight::minusDelay(int millis) {
  light.minusDelay(millis);
}
