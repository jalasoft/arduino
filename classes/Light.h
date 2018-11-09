class Light {

  int pin;
  int delayMillis;

  public:
  Light(int, int);
  void perform();
  Light operator+(int);
  Light operator-(int);
  void minusDelay(int);
};
