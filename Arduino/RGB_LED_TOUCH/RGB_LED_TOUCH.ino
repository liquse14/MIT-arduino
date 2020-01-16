
int pushButton = 2;  
int Red=9;
int Blue=10;
int Green=11;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {     
int fadeAmount = 5; 
    digitalWrite(Red, OUTPUT);    
    digitalWrite(Blue, OUTPUT);    
    digitalWrite(Green, OUTPUT);    
  int buttonState = digitalRead(pushButton);  
  Serial.println(buttonState);
  delay(1000);   

  if(buttonState==1){
      
    for(int i=255;i>0;i--){
    analogWrite(Red, i);   
    delay(10);   
    }     
    analogWrite(Red, 255);  
      
    for(int i=255;i>0;i--){
    analogWrite(Blue, i);   
    delay(10);   
    }   
    analogWrite(Blue, 255); 
    for(int i=255;i>0;i--){
    analogWrite(Green, i);   
    delay(10);   
    }   
    analogWrite(Green, 255); 
    for(int i=0;i<3;i++){
     analogWrite(Red, 0);
     analogWrite(Blue, 0);
     analogWrite(Green, 0);
     delay(500);
     analogWrite(Red, 255);
     analogWrite(Blue, 255);
     analogWrite(Green, 255);
     delay(500);
  }
     
    
  }
  
}
