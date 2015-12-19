#include <LiquidCrystal.h>

#define Ii_CIRCUMFLEX 0
#define a_CIRCUMFLEX  1
#define a_HAT         2
#define A_HAT         3
#define A_CIRCUMFLEX  4
#define Ss_COMMA      5
#define T_COMMA       6
#define t_COMMA       7

void loadRomanianChars(LiquidCrystal &lcd)
{
byte Ii_circumflex[8] = {
  B00100,
  B01010,
  B00000,
  B01110,
  B00100,
  B00100,
  B00100,
  B01110
};

byte a_hat[8] = {
  B01010,
  B00100,
  B00000,
  B01110,
  B00001,
  B01111,
  B10001,
  B01111,
};

byte a_circumflex[8] = {
  B00100,
  B01010,
  B00000,
  B01110,
  B00001,
  B01111,
  B10001,
  B01111
};

byte A_circumflex[8] = {
  B00100,
  B01010,
  B00000,
  B01110,
  B10001,
  B11111,
  B10001,
  B10001
};

byte A_hat[8] = {
  B01010,
  B00100,
  B00000,
  B01110,
  B10001,
  B11111,
  B10001,
  B10001,
};

byte Ss_comma[8] = {
  B00000,
  B01110,
  B10000,
  B01110,
  B00001,
  B11110,
  B00000,
  B00100,
};

byte t_comma[8] = {
  B00100,
  B00100,
  B01110,
  B00100,
  B00100,
  B00110,
  B00000,
  B00100
};

byte T_comma[8] = {
  B11111,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B00000,
  B00100,
};

  lcd.createChar(0,Ii_circumflex);
  lcd.createChar(1,a_circumflex);
  lcd.createChar(2,a_hat);
  lcd.createChar(3,A_hat);
  lcd.createChar(4,A_circumflex);
  lcd.createChar(5,Ss_comma);
  lcd.createChar(6,T_comma);
  lcd.createChar(7,t_comma);
}
