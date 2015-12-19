#include <LiquidCrystal.h>
#include "LiquidCrystalRomanianChars.h"

// be sure to change these numbers to match your LCD interface pins, if necessary
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  loadRomanianChars(lcd);
  // be sure to change these numbers to match your LCD matrix dimensions, if necessary
  lcd.begin(16, 2);
  
  /*
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2));
  lcd.write(byte(3));
  lcd.write(byte(4));
  lcd.write(byte(5));
  lcd.write(byte(6));
  lcd.write(byte(7));
  */
  
  lcd.print("Fii ");
  lcd.write(byte(Ii_CIRCUMFLEX));
  lcd.print("n");
  lcd.write(byte(t_COMMA));
  lcd.write("elept!");
  lcd.setCursor(0,1);
  lcd.print("Iube");
  lcd.write(Ss_COMMA);
  lcd.write("te ");
  lcd.write(Ss_COMMA);
  lcd.write("i iart");
  lcd.write(a_HAT);

}

void loop() {
}
