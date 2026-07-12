// Initial Start of Sequence 

const int off = 0;
const int on = 1;

const int baseBinary = 2;
const int binaryLimit = 4;

const int PositionOne = 11;
const int degreeOne = 0;

const int PositionTwo = 10;
const int degreeTwo = 1;

const int PositionThree = 9;
const int degreeThree = 2;

const int PositionFour = 8;
const int degreeFour = 3;

const int initialDelay = 1000;

void setup() {
  pinMode(PositionOne, OUTPUT);
  pinMode(PositionTwo, OUTPUT);
  pinMode(PositionThree, OUTPUT);
  pinMode(PositionFour, OUTPUT);
};


void loop() {
    digitalWrite(PositionOne, HIGH);
    delay(initialDelay);
    digitalWrite(PositionOne, LOW);
    digitalWrite(PositionTwo, HIGH);
    delay(initialDelay);
    digitalWrite(PositionOne, HIGH);
    delay(initialDelay);
    digitalWrite(PositionOne, LOW);
    digitalWrite(PositionTwo, LOW);
    digitalWrite(PositionThree, HIGH);
};

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

