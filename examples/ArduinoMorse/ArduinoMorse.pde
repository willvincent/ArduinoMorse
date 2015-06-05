#include <ArduinoMorse.h>

ArduinoMorse morse(13); // LED on pin 13 will flash

void setup() {
}

void loop() {
  // convert string to morse code, and flash LED on the defined pin.
  morse.process("The quick brown fox jumped over the lazy dog.");
  delay(5000);
}
