#ifndef testuino_h
#define testuino_h

class Testuino {

  int greenPin;
  int redPin;

  public:
    class Builder{
      int greenPinNumber;
      int redPinNumber;

      enum SuiteType{ SINGLE, MULTIPLE, NUMBERED};

      SuiteType suiteType = MULTIPLE;

      public:
        Builder(){};

        Builder* greenPin(int pinNumber){
          greenPinNumber = pinNumber;
          return this;
        }

        Builder* redPin(int pinNumber){
          redPinNumber = pinNumber;
          return this;
        }

        Builder* singleTestSuit(){
          suiteType = SINGLE;
          return this;
        }

        Builder* numberedTestSuit(){
          suiteType = SINGLE;
          return this;
        }

        Testuino build(){
          return Testuino(greenPinNumber, redPinNumber);
        }

    };

    static Builder builder();
    Testuino( int green, int red );
    void startUp();
    void assertEquals(int expected, int actual);
    void assertEquals(double expected, double actual);
    void assertEquals(long expected, long actual);
    void assertEquals(char expected, char actual);
    void assertTrue(bool actual);

  private:
    void writeTrue();
    void writeFalse();
};

#endif
