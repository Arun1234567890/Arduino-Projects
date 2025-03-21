#include <Servo.h>
Servo myservo;
const int IR=12;
int sensorstate;
void setup()
{
  myservo.attach(11);
  pinMode(IR,INPUT);
}
void loop()
{
  sensorstate=digitalRead(IR);
  if(sensorstate==0){
    myservo.write(0);
     }
  if(sensorstate==1){
   myservo.write(90);
   }
}
