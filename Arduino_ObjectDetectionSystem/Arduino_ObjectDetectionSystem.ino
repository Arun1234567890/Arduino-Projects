#include<LiquidCrystal_I2C.h>
#define TRIG 7
#define ECHO 6
LiquidCrystal_I2C lcd(0x27,16,2);
void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
}
void loop(){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long time = pulseIn(ECHO,HIGH);
  int distance = time*0.034/2;
  if(distance > 0 && distance < 400){
  lcd.setCursor(0,0);
  lcd.print("Object Detected");
  lcd.setCursor(0,1);
  lcd.print("Distance:");
  lcd.print(distance);
  lcd.print(" Cm");
  }
  else{
    lcd.print("Object Not Detected");
  }
}
