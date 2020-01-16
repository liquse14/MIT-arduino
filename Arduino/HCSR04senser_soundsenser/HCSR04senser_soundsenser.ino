#include <HCSR04.h>

HCSR04 hc(5,6);

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
  }

void loop(){
  float a=hc.dist();
  Serial.println(a);
  digitalWrite(13, 1);
  delay(a*10);
  digitalWrite(13, 0);
  delay(a*10);
}
