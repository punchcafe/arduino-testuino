#include "src/testuino.h"

Testuino test(6,7);

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  test.assertEquals(12,12);
  delay(500);
  test.assertEquals('a','b');
  delay(500);
  test.assertEquals(12.0,12.0);
  delay(500);
  test.assertTrue("Hello" == "World");
  delay(1000);
}
