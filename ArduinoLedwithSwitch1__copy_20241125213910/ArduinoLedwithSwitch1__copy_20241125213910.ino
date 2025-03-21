const int LED = 13;
const int SW = 12;
unsigned int button_state=0;
void setup() {
 pinMode(SW,INPUT);
 pinMode(LED,OUTPUT);
}

void loop() 
{
  button_state=digitalRead(SW);
  if(button_state==HIGH)
  {
    digitalWrite(LED,HIGH);
    }
  else
  {
    digitalWrite(LED,LOW);
  }
}
