class Tone {
  int pin;
  int frequency;

  public:
  Tone(int, int);
  void startReproducing();
  void stopReproducing();
  void minusDelay(int);
};
