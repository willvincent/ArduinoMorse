#include <ArduinoMorse.h>

ArduinoMorse morse(13, Serial); // LED on pin 13 will flash

void setup() {
  Serial.begin(115200);
  delay(3000);
}

void loop() {
  // convert string to morse code, and flash LED on the defined pin.
  morse.process("The quick brown fox jumped over the lazy dog.");
  delay(5000);
}
