const int TRIG=1;
const int ECHO=2;
long Totaltime;
int Distance;
void setup()
{
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}
void loop()
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  Totaltime=pulseIn(ECHO,HIGH);
  Distance=Totaltime*0.034/2;
  Serial.print("Distance=");
  Serial.println(Distance);
}