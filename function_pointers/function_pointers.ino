
const int DIODA1 = 3;
const int DIODA2 = 4;
const int DIODA3 = 5;

const int TLACITKO = 9;

void shine(const int output, const int delay = 200);

void (*func[3])() = {
  []() -> void{ shine(DIODA1);},
  []() -> void{ shine(DIODA2);},
  []() -> void{ shine(DIODA3);}
};

void setup() {
  pinMode(DIODA1, OUTPUT);
  pinMode(DIODA2, OUTPUT);
  pinMode(DIODA3, OUTPUT);

  pinMode(TLACITKO, INPUT);
}

void loop() {
  const int status = digitalRead(TLACITKO);

  if (status == HIGH) {
    for(int i = 0; i<3; i++) {
      func[i]();
    }
  }
}

void shine(const int pin, const int delayMillis) {
    digitalWrite(pin, HIGH);
    delay(delayMillis);
    digitalWrite(pin, LOW);
}
