// Initial Start of Sequence 
const int initialSeq = 1;


// Red Pin Variables
const int redPin = 13;
const int redSeq = 5;
const int redDelay = 300;

// Green Pin Variable
const int greenPin = 8;
const int greenSeq = 10;
const int greenDelay = 100;

// Blue Pin Variable
const int bluePin = 2;
const int blueSeq = 15;
const int blueDelay = 200;

struct PinPlacement {
  const int pincolor;
  const int pinseq;
  const int pindelay;
};

PinPlacement myPins[] = {
  {redPin, redSeq, redDelay},
  {greenPin, greenSeq, greenDelay},
  {bluePin, blueSeq, blueDelay}
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
