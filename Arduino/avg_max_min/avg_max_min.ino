
void setup() {

  Serial.begin(9600);
  pinMode(8,OUTPUT);
}


void loop() {
  int value=0;
  int maxvalue=0;
  int minvalue=1023;
  int sum=0;
  for(int i=1;i<10;i++){
    value=analogRead(A0);
    sum+=analogRead(A0);
    if(value>maxvalue){ //현상태의 최대값
      maxvalue=value;
      delay(25);
    }
    if(value<minvalue){
      minvalue=value;
      delay(25);
    
    }
    Serial.print("최대값");
    Serial.println(maxvalue); //10번 측정시 최대값
    Serial.print("최소값");
    Serial.println(minvalue); //10번 측정시 최소값
    
    delay(1000);
}
Serial.print("최댓값과 최소값을 뺀 평균값");
Serial.println((sum-maxvalue-minvalue)/8);  //최댓값과 최소값을 뺀 평균값
delay(10000);
}
