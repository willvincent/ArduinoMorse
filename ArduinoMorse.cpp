/*
  ArduinoMorse.cpp - A morse code flashing library.
*/

#include "Arduino.h"
#include "ArduinoMorse.h"
#include <ctype.h>

#define DOT 75           // Duration of a dot
#define DASH 375         // Duration of a dash
#define INNER_PAUSE 125  // Duration of pause between dot and dash in a character 
#define CHAR_BREAK 250   // Duration of pause between characters
#define WORD_BREAK 375   // Duration of pause between words (spaces, punctuation, etc)

ArduinoMorse::ArduinoMorse(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
  _dbg = false;
}

ArduinoMorse::ArduinoMorse(int pin, Stream &dbgSerial) {
  pinMode(pin, OUTPUT);
  _pin = pin;
  _dbg = true;
  _dbgSerial = &dbgSerial;
  _dbgSerial->print(' ');
}

void ArduinoMorse::dot() {
  if (_dbg) {
    _dbgSerial->print('.');
  }
  digitalWrite(_pin, HIGH);
  delay(DOT);
  digitalWrite(_pin, LOW);
  delay(INNER_PAUSE);
}

void ArduinoMorse::dash() {
  if (_dbg) {
    _dbgSerial->print('-');
  }
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
        if (_dbg) { _dbgSerial->print("[A]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'B':
        if (_dbg) { _dbgSerial->print("[B]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'C':
        if (_dbg) { _dbgSerial->print("[C]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'D':
        if (_dbg) { _dbgSerial->print("[D]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'E':
        if (_dbg) { _dbgSerial->print("[E]"); }
        ArduinoMorse::dot();
        break;
      case 'F':
        if (_dbg) { _dbgSerial->print("[F]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'G':
        if (_dbg) { _dbgSerial->print("[G]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'H':
        if (_dbg) { _dbgSerial->print("[H]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'I':
        if (_dbg) { _dbgSerial->print("[I]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'J':
        if (_dbg) { _dbgSerial->print("[J]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'K':
        if (_dbg) { _dbgSerial->print("[K]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'L':
        if (_dbg) { _dbgSerial->print("[L]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'M':
        if (_dbg) { _dbgSerial->print("[M]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'N':
        if (_dbg) { _dbgSerial->print("[N]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'O':
        if (_dbg) { _dbgSerial->print("[O]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'P':
        if (_dbg) { _dbgSerial->print("[P]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'Q':
        if (_dbg) { _dbgSerial->print("[Q]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case 'R':
        if (_dbg) { _dbgSerial->print("[R]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        break;
      case 'S':
        if (_dbg) { _dbgSerial->print("[S]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case 'T':
        if (_dbg) { _dbgSerial->print("[T]"); }
        ArduinoMorse::dash();
        break;
      case 'U':
        if (_dbg) { _dbgSerial->print("[U]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'V':
        if (_dbg) { _dbgSerial->print("[V]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'W':
        if (_dbg) { _dbgSerial->print("[W]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        break;
      case 'X':
        if (_dbg) { _dbgSerial->print("[X]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'Y':
        if (_dbg) { _dbgSerial->print("[Y]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        break;
      case 'Z':
        if (_dbg) { _dbgSerial->print("[Z]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        break;
      case '0':
        if (_dbg) { _dbgSerial->print("[0]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '1':
        if (_dbg) { _dbgSerial->print("[1]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '2':
        if (_dbg) { _dbgSerial->print("[2]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '3':
        if (_dbg) { _dbgSerial->print("[3]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case '4':
        if (_dbg) { _dbgSerial->print("[4]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '5':
        if (_dbg) { _dbgSerial->print("[5]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '6':
        if (_dbg) { _dbgSerial->print("[6]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '7':
        if (_dbg) { _dbgSerial->print("[7]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '8':
        if (_dbg) { _dbgSerial->print("[8]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '9':
        if (_dbg) { _dbgSerial->print("[9]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '.':
        if (_dbg) { _dbgSerial->print("[.]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case ',':
        if (_dbg) { _dbgSerial->print("[,]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
	break;
      case ':':
        if (_dbg) { _dbgSerial->print("[:]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '?':
        if (_dbg) { _dbgSerial->print("[?]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
	break;
      case '\'':
        if (_dbg) { _dbgSerial->print("[']"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '-':
        if (_dbg) { _dbgSerial->print("[-]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '/':
        if (_dbg) { _dbgSerial->print("[/]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '(':
        if (_dbg) { _dbgSerial->print("[(]"); }
      case ')':
        if (_dbg) { _dbgSerial->print("[)]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      case '"':
        if (_dbg) { _dbgSerial->print("[']"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '@':
        if (_dbg) { _dbgSerial->print("[@]"); }
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
        ArduinoMorse::dot();
	break;
      case '=':
        if (_dbg) { _dbgSerial->print("[=]"); }
        ArduinoMorse::dash();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dot();
        ArduinoMorse::dash();
	break;
      default:
        delay(WORD_BREAK);
        if (_dbg) {
          _dbgSerial->println();
        }
        break;
    }
    delay(CHAR_BREAK);
    if (_dbg) {
      _dbgSerial->print(' ');
    }
  }
}
