#include <Servo.h>
Servo myservo;
void setup()
{
  myservo.attach(11);
}
void loop()
{
  myservo.write(180);
  myservo.write(0);
}