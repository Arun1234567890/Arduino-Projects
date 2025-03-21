const int LED=11;
void setup()
{
  pinMode(LED,OUTPUT);
}
void loop()
{
  int i;
  for(i=0;i<=255;i++)
  {
    analogWrite(LED,i);
  }
  for(i=255;i>=0;i--)
  {
    analogWrite(LED,i);
  }
}