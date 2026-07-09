const int initialSeq = 1;

const int redPin = 13;
const int greenPin = 8;
const int bluePin = 2;
const int redSeq = 5;
const int greenSeq = 10;
const int blueSeq = 15;

struct PinPlacement {
  const int pincolor;
  const int pinseq;
  const int pindelay;
};

PinPlacement myPins[] = {
  {redPin, redSeq, 300},
  {greenPin, greenSeq, 200},
  {bluePin, blueSeq, 100}
};

const int pinSize = sizeof(myPins) / sizeof(myPins[0]);

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
};

void blinkPin(int pin, int time){
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
};


void loop() {
  for (int i=0; i < pinSize; i++){
    for (int x=initialSeq; x < myPins[i].pinseq + 1; x++){
        blinkPin(myPins[i].pincolor, myPins[i].pindelay);
    };
  };
};
