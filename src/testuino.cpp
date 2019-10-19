#include "testuino.h"
#include "arduino.h"

Testuino::Testuino( int green, int red ){
  greenPin = green;
  redPin = red;
  startUp();
}

void Testuino::startUp(){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, HIGH);
}

void Testuino::assertEquals(int expected, int actual){
  expected == actual ? writeTrue() : writeFalse();
}

void Testuino::assertEquals(double expected, double actual){
  expected == actual ? writeTrue() : writeFalse();
}

void Testuino::assertEquals(char expected, char actual){
  expected == actual ? writeTrue() : writeFalse();
}

void Testuino::assertTrue(bool actual){
  actual == true ? writeTrue() : writeFalse();
}

void Testuino::writeTrue(){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}

void Testuino::writeFalse(){
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
}
