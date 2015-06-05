/*
  ArduinoMorse.h - Morse code flashing library.
*/

#ifndef ArduinoMorse_h
#define ArduinoMorse_h

#include "Arduino.h"

class ArduinoMorse {
  public:
    ArduinoMorse(int pin);
    void process(char* message);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif
