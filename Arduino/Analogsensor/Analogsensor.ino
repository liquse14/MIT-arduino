
void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0); //열센서
  int sensorValue2 = analogRead(A1);  //조도센서
  // print out the value you read:
  Serial.print("열센서=");
  Serial.println(sensorValue);
  delay(1); 
  Serial.print("조도센서=");
  Serial.println(sensorValue2);
  delay(1); 
   if(sensorValue2>=300&&sensorValue<=400){
    digitalWrite(8,1);
    delay(100);
    digitalWrite(9,1);
    delay(100);
    digitalWrite(10,1);    
    delay(100);
    digitalWrite(11,1);    
    delay(100);
    digitalWrite(11,0);    
    delay(100);
    digitalWrite(10,0);
    delay(100);
    digitalWrite(9,0); 
    delay(100);  
    digitalWrite(8,0);
    delay(100);
  }

  delay(1000);
}
    
