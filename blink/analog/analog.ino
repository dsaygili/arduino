const int pin = 9;
const int bright = 5;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  analogWrite(pin, bright);
}

