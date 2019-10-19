#ifndef testuino_h
#define testuino_h

class Testuino {

  int greenPin;
  int redPin;

  public:
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
