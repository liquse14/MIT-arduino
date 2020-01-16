#include <HCSR04.h>

HCSR04 hc(5,6);

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
  }

void loop(){
  float a=hc.dist();
  Serial.println(a);
  if(a<30){
  digitalWrite(13, 1);
  delay(100);
  }
  if(a<20){
  digitalWrite(13, 1);
  delay(50);
  }if(a<10){
  digitalWrite(13, 1);
  delay(30);
  }
  
  
  else                  
  digitalWrite(13, 0); 
  delay(50);  
}
