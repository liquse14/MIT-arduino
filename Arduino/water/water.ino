int minvalue=30000,maxvalue=0;
int maxflag=0,minflag=0;
void setup() {
  pinMode(8,OUTPUT);  //시리얼을 사용하기 위해 속도 셋팅
  Serial.begin(9600); //시리얼을 사용하기 위해 속도 셋팅
}



  void loop(){   
  int sensorValue = analogRead(A1); //수위센서 읽기
 
  if(sensorValue>400) //수위가 올라갔을때  
  digitalWrite(8, 1);
 else                     
   digitalWrite(8, 0);    
  if(sensorValue >maxvalue){ //들어온값이 현재 최대값보다 크면
   maxvalue=sensorValue;  //현재최대값을 들어온 값으로 변경
   maxflag=1;
  }
  if(sensorValue <minvalue){ //들어온값이 현재 최소값보다 작으면
  minvalue=sensorValue;     //현재 최소값을 들어온 값으로 변경
  minflag=1;
  }
  delay(100);           //0.1초마다
  if(maxflag==1||minflag==1){ 
      Serial.print("max:");Serial.println(maxvalue);
      Serial.print("min"); Serial.println(minvalue);
      }
}
