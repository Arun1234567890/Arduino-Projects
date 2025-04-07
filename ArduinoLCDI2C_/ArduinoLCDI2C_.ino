#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#define LCDADDR 0x27
#define LCDCOLOUMNS 16
#define LCDROWS 2
LiquidCrystal_I2C lcd(LCDADDR,LCDCOLOUMNS,LCDROWS);
void setup(){
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
}
void loop(){
  lcd.setCursor(0,0);
  lcd.print("Hi");
  lcd.setCursor(0,1);
  lcd.print("Welcome");
}