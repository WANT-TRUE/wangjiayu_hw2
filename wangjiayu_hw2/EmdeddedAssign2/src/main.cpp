#include <Arduino.h>

String myString = ""; 

String short_String = ""; 

int i;

void setup() {

  for(i=25;i<=27;i++)
    {
       pinMode(i, OUTPUT); 
    }
    pinMode(33,OUTPUT);
  Serial.begin(115200); 
  Serial.println("Serial started"); 
}

void loop() {
  myString = Serial.readStringUntil('\n'); 
  short_String = myString.substring(0, 8);

  if(short_String =="1")
{
  digitalWrite(25, HIGH); 
  digitalWrite(26, HIGH); 
}
else if(short_String =="2")
{
  digitalWrite(33, HIGH); 
  digitalWrite(27, HIGH); 
}

else if(short_String == "3")
{

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


  if(short_String =="4"){
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(33, LOW);
  }
}