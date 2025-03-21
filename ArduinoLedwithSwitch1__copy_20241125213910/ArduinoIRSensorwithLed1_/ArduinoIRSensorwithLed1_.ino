const int LED=13;
const int IR=12;
unsigned int sensor_state=0;
void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(IR,INPUT);
}
void loop()
{
  sensor_state=digitalRead(IR);
   if(sensor_state==HIGH)
   {
    digitalWrite(LED,HIGH);
   }
   else
   {
    digitalWrite(LED,LOW);
   }
}