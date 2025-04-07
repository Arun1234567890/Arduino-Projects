#define led 13
#define sw 12
unsigned int buttonstate = 0;
void setup() {
 pinMode(sw,INPUT);
 pinMode(led,OUTPUT);
}

void loop() {
  buttonstate = digitalRead(sw);
  if(buttonstate==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}
