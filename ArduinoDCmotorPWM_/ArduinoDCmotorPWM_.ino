const int IN1=1;
const int IN2=2;
const int EN=3;
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(EN,OUTPUT);
}
void loop()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(EN,255);
}