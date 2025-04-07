#include<DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup(){
  dht.begin();
  Serial.begin(9600);
}
void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print("%");
  Serial.print("Temperature:");
  Serial.print(t);
  Serial.print(" C");
}