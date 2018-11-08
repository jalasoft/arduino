class Light {

  int pin;
  int delayMillis;

  public:
  Light(int, int);
  void shine();
  Light operator+(int);
  Light operator-(int);
  void minusDelay(int);
};

Light::Light(int p_pin, int p_delayMillis) : pin(p_pin), delayMillis(p_delayMillis) {
  pinMode(pin, OUTPUT);
}

void Light::shine() {
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

Light* light1;
Light* light2;
Light* light3;

void setup() {
  light1 = new Light(3, 1000);
  light2 = new Light(4, 1000);
  light3 = new Light(5, 1000);
}

void loop() {
  light1->shine();
  light2->shine();
  light3->shine();

  light1->minusDelay(10);
  light2->minusDelay(10);
  light3->minusDelay(10);
}
