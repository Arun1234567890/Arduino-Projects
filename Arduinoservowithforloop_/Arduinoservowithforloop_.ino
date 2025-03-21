const int Servo=11;
void setup()
{
  pinMode(Servo,OUTPUT);
}
void loop()
{
  int i;
  for(i=0;i<=180;i++)
  {
    digitalWrite(Servo,i);
  }
  for(i=180;i>=0;i--)
  {
    digitalWrite(Servo,i);
  }
}