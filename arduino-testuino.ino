#include "src/testuino.h"

//Testuino test(6,7);

Testuino test = Testuino::builder().greenPin(6)->redPin(7)->build();

class LogicOperation{
  public:
    static bool notOperation(bool operand){
      int sig = operand == true ? HIGH : LOW;
      digitalWrite(10, sig);
      return digitalRead(8) == HIGH ? true : false;
    }
};

void setup() {

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
  digitalWrite(9, HIGH);
}

void loop() {
  test.assertEquals(LogicOperation::notOperation(true),false);
  delay(1000);
  test.assertEquals(LogicOperation::notOperation(false),true);
  delay(1000);
}
