#include <Arduino.h>
int i;

void setup() {
for(i=25;i<=27;i++)
    {
       pinMode(i, OUTPUT); 
    }
    pinMode(33,OUTPUT);
}

 
void loop() {
    digitalWrite(33,HIGH);
    delay(500);
    
    digitalWrite(33,LOW);
    for(i = 25; i < 28; i++ )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }
  for(i = 27;i > 24;i--)
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
    }

    digitalWrite(33,HIGH);
    delay(500);
    digitalWrite(33,LOW);

}

