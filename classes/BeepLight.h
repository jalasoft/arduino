#include "Light.h"
#include "Tone.h"

class BeepLight {

  Light light;
  Tone toone;

  public:
  BeepLight(int, int, int, int);

  void perform();
  void minusDelay(int);
};
