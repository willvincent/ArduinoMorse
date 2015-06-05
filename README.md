# ArduinoMorse
Arduino morse code library

This library is based directly on the [arduino example library](http://www.arduino.cc/en/Hacking/LibraryTutorial) by David Mellis.

The major difference is that it provides a process method that will accept a string and flash the appropriate international morse code for that string.

Of course, it also supports arbitrary dot and dash flashes as well.

Basic usage:
```
  #include <ArduinoMorse.h>

  // Instantiate an instance of the morse class, bound to pin 13:
  ArduinoMorse morse(13);

  void setup() {
    delay(3000); // Ensure things have settled before we start our loop.
  }

  void loop() {
    // Flash SOS in morse code:
    morse.dot(); morse.dot(); morse(dot);
    morse.dash(); morse.dash(); morse.dash();
    morse.dot(); morse.dot(); morse(dot);
    delay(1000);

    // Easier way to flash the same message, with appropriate pauses 
    // between characters:
    morse.process("SOS");
    delay(5000);
  }
```


Include serial debug output:
```
  #include <ArduinoMorse.h>

  // Instantiate an instance of the morse class, bound to pin 13
  // with serial debug output:
  ArduinoMorse morse(13, Serial);

  void setup() {
    Serial.begin(115200); 
    delay(3000); // Ensure things have settled before we start our loop.
  }

  void loop() {
    // Flash a message in morse, and print morse code to serial port.
    morse.process("This will be printed to the serial port.");
    delay(5000);
  }
```


