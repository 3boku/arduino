#define TL 27
#define TR 4

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); //0X20 또는 0X27
void setup()
{
  lcd.init(); 
  lcd.clear();
  lcd.backlight();
  pinMode(TL, INPUT);
  pinMode(TR, INPUT);
}
void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("30614JHS");

  int r = digitalRead(TR);
  int l = digitalRead(TL);

  lcd.setCursor(0, 1);
  lcd.print("TR: ");
  lcd.print(r);
  lcd.print(" TL: ");
  lcd.print(l);

  delay(1000);
}
