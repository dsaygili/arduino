int pin = 9;
int lowbright = 5;
int highbright = 256;
int delayamount = 100;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  for (int i = lowbright; i < highbright; i++){
    analogWrite(pin, i);
    delay(delayamount);
  };
}

