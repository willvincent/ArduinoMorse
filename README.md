# ArduinoMorse
Arduino morse code library

This library is based directly on the [arduino example library](http://www.arduino.cc/en/Hacking/LibraryTutorial) by David Mellis.

The major difference is that it provides a process method that will accept a string and flash the appropriate international morse code for that string.

Of course, it also supports arbitrary dot and dash flashes as well.

Basic usage:
```
  // Instantiate an instance of the morse class, bound to pin 13:
  ArduinoMorse morse(13);

  // Flash SOS in morse code:
  morse.dot(); morse.dot(); morse(dot);
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse(dot);

  // Easier way to flash the same message, with appropriate pauses between characters:
  morse.process("SOS");
```


