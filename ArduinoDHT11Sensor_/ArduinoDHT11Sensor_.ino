#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#include<DHT.h>

LiquidCrystal_I2C lcd(0x27,16,2);
DHT dht(2,DHT22);
void setup() {
  dht.begin();
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("Humidity:");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Temperature:");
  lcd.print(t);
  lcd.print("*C");
}
 