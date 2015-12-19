# Romanian characters for Arduino-operated LCDs
Arduino library which implements the Romanian diacritics (ă, â, î/Î, Ș/ș, ț, Ă, Â, Ț) for display using Hitachi HD44780-compatible LCD controllers.

## Overview
The library features one function, `loadRomanianCharacters`, which receives the `LiquidCrystal` class instance and loads 8 characters into the LCD custom glyph registers, and 8 `#define`s which can be used to print these characters:
* `#define Ii_CIRCUMFLEX 0`
* `#define a_CIRCUMFLEX  1`
* `#define a_HAT         2`
* `#define A_HAT         3`
* `#define A_CIRCUMFLEX  4`
* `#define Ss_COMMA      5`
* `#define T_COMMA       6`
* `#define t_COMMA       7`

Because of capability constraints (only up to 8 custom characters available), S with comma and I with circumflex have only one character implemented for both uppercase and lowercase variants, intended to suit both.

## Getting started
`#include "LiquidCrystalRomanianChars.h"` in your project. Use `write()` to print the characters.

## Screenshots
![Screenshot 1](https://raw.githubusercontent.com/petru-dimitriu/LiquidCrystalRomanianChars/master/screen1.gif)
![Screenshot 2](https://raw.githubusercontent.com/petru-dimitriu/LiquidCrystalRomanianChars/master/screen2.gif)

## License
I hereby release this to the public domain. I don't mind if you credit me, though.