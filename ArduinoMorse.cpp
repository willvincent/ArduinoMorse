/*
  ArduinoMorse.cpp - A morse code flashing library.
*/

#include "Arduino.h"
#include "ArduinoMorse.h"
#include <ctype.h>

#define DOT 75          // Duration of a dot
#define DASH 375         // Duration of a dash
#define INNER_PAUSE 250  // Duration of pause between dot and dash in a character 
#define CHAR_BREAK 500   // Duration of pause between characters
#define WORD_BREAK 750  // Duration of pause between words (spaces, punctuation, etc)

ArduinoMorse::ArduinoMorse(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void ArduinoMorse::dot() {
  digitalWrite(_pin, HIGH);
  delay(DOT);
  digitalWrite(_pin, LOW);
  delay(INNER_PAUSE);
}

void ArduinoMorse::dash() {
  digitalWrite(_pin, HIGH);
  delay(DASH);
  digitalWrite(_pin, LOW);
  delay(INNER_PAUSE);
}

void ArduinoMorse::process(char* message) {
  for(char* it = message; *it; ++it) {
    char c = toupper(*it);
    switch(c) {
      case 'A':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'B':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'C':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'D':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'E':
        ArduinoMorse::dot();
        break;
      case 'F':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'G':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'H':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'I':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'J':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'K':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'L':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'M':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'N':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'O':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'P':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'Q':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case 'R':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'S':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'T':
        ArduinoMorse::dash();
        break;
      case 'U':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'V':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'W':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'X':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'Y':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'Z':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case '0':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '1':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '2':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '3':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '4':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '5':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '6':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '7':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '8':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '9':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '.':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case ',':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case ':':
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '?':
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '\'':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '-':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '/':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '(':
      case ')':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '"':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '@':
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '=':
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      default:
        delay(WORD_BREAK);
        break;
    }
    delay(CHAR_BREAK);
  }
}
