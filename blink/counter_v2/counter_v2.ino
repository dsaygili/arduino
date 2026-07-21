// Initial Start of Sequence 

const int baseBinary = 2;
const int binaryLimit = 5;
const int lastBit = pow(2,5);

const int PositionOne = 11;
const int PositionTwo = 10;
const int PositionThree = 9;
const int PositionFour = 8;
const int PositionFive = 7;

const int initialDelay = 1000;

struct PinPlacement {
  const int pinseq;
  const int pinposition;
};

PinPlacement myPins[] = {
  {0, PositionOne},
  {1, PositionTwo},
  {2, PositionThree},
  {3, PositionFour},
  {4, PositionFive}
};

void setup() {
  pinMode(PositionOne, OUTPUT);
  pinMode(PositionTwo, OUTPUT);
  pinMode(PositionThree, OUTPUT);
  pinMode(PositionFour, OUTPUT);
  pinMode(PositionFive, OUTPUT);

};

void flashBitRep(int number) {
  for (int i = binaryLimit; i >= 0; i--) {
    int bit = (number >> i) & 1;
    digitalWrite(myPins[i].pinposition, bit);
  };
  delay(initialDelay);
};


void loop() {
    
    for (int number = 0; number < lastBit; number++){
      digitalWrite(PositionOne, LOW);
      digitalWrite(PositionTwo, LOW);
      digitalWrite(PositionThree, LOW);
      digitalWrite(PositionFour, LOW);
      digitalWrite(PositionFive, LOW);
      delay(initialDelay);
      flashBitRep(number);
    };

};



// 3 2 1 0 
// 0 0 0 0 - i = 0 [0]
// 0 0 0 1 - i = 1 [1]
// 0 0 1 0 - i = 2 [1, 1]
// 0000 - 0
// 0001 - 1
// 0010 - 2
// 0011 - 3
// 0100 - 4
// 0101 - 5
// 0110 - 6
// 0111 - 7
// 1000 - 8
// 1001 - 9
// 1010 - 10
// 1011 - 11
// 1100 - 12
// 1101 - 13
// 1110 - 14
// 1111 - 15

