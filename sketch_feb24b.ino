#include <LiquidCrystal_I2C.h>
#include "CustomChars.h"

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.init();          
  lcd.backlight(); 
  lcd.createChar(0, heart);
  lcd.createChar(1, customChar);
  lcd.createChar(2, skull);
  lcd.createChar(3, gasp);
  lcd.createChar(4, lock);
  lcd.createChar(5, moosic);
  lcd.createChar(6, tck);
  lcd.createChar(7, bel);
  lcd.setCursor(5, 0);
  lcd.cursor();
  delay(300);
  lcd.setCursor(6,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("H");
  delay(300);
  lcd.setCursor(7,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("He");
  delay(300);
  lcd.setCursor(8,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("Hel");
  delay(300);
  lcd.setCursor(9,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("Hell");
  delay(300);
  lcd.setCursor(10,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("Hello");
  delay(300);
  lcd.setCursor(11,0);
  lcd.cursor();
  lcd.setCursor(5,0);
  lcd.print("Hello!");
  delay(3000);
  lcd.noCursor();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Made with");
  lcd.setCursor(10, 0); 
  lcd.write(byte(0));
  lcd.setCursor(7,1);
  lcd.print("by Flubel");
  delay(2000);
  lcd.clear();
}

void loop() { 
  lcd.createChar(0, heart);
  lcd.createChar(1, customChar);
  lcd.createChar(2, skull);
  lcd.createChar(3, gasp);
  lcd.createChar(4, lock);
  lcd.createChar(5, moosic);
  lcd.createChar(6, tck);
  lcd.createChar(7, bel);
  /*
  int i;
  for(i=0;i<8;i++){
    int y = 0;
    lcd.setCursor(y,0);
    lcd.write(byte(i+1));
    y+2;
  }
  */
    lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.setCursor(2, 0);
  lcd.write(byte(1));
  lcd.setCursor(4, 0);
  lcd.write(byte(2));
  lcd.setCursor(6, 0);
  lcd.write(byte(3));
  lcd.setCursor(8, 0);
  lcd.write(byte(4));
  lcd.setCursor(10, 0);
  lcd.write(byte(5));
  lcd.setCursor(12, 0);
  lcd.write(byte(6));
  lcd.setCursor(14, 0);
  lcd.write(byte(7));
  delay(3000);
  lcd.clear();
  lcd.createChar(0, scrd);
  lcd.createChar(1, smilly);
  lcd.createChar(2, unlck);
  lcd.createChar(3, bltnt);
  lcd.createChar(4, fox);
  lcd.createChar(5, moosic2);
  lcd.createChar(6, amogus);
  lcd.createChar(7, chss);
  lcd.setCursor(1, 1);
  lcd.write(byte(0));
  lcd.setCursor(3, 1);
  lcd.write(byte(1));
  lcd.setCursor(5, 1);
  lcd.write(byte(2));
  lcd.setCursor(7, 1);
  lcd.write(byte(3));
  lcd.setCursor(9, 1);
  lcd.write(byte(4));
  lcd.setCursor(11, 1);
  lcd.write(byte(5));
  lcd.setCursor(13, 1);
  lcd.write(byte(6));
  lcd.setCursor(15, 1);
  lcd.write(byte(7));
  delay(3000);
  lcd.clear();
}
