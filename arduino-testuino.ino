class Testuino {

  int greenPin;
  int redPin;
  
  public:
  Testuino( int green, int red ){
    greenPin = green;
    redPin = red;
    startUp();
  }

  void startUp(){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, HIGH);
  }

  void assertEquals(int expected, int actual){
    expected == actual ? writeTrue() : writeFalse();
  }

  void assertTrue(bool actual){
    actual == true ? writeTrue() : writeFalse();
  }

  private: 
  void writeTrue(){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  void writeFalse(){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
};

Testuino test(6,7);

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  int myguy = 2;
  int wednesday = 2;
  test.assertEquals(12,12);
  delay(1000);

  test.assertTrue(false);
  delay(1000);
  // put your main code here, to run repeatedly:
}
