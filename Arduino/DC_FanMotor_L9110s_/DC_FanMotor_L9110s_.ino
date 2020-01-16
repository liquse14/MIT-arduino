void setup() {
 pinMode(5, OUTPUT) ; // 모터 컨트롤 위하여 5번을 출력으로
 pinMode(6, OUTPUT) ; // 모터 컨트롤 위하여 6번을 출력으로
 Serial.begin(9600);
}
void loop() {
  //아날로그 값을 읽는다-조정버튼
  int value=analogRead(A0);//가변저항 연결된곳
  //읽는 값은 0~1023값이 들어오기 때문에 필요한값 pwm0~255로 변환해 준다.
  Serial.println(value);
  int result=mymap(value,0,1023,0,180);
  //변환된 PWM값으로 동작시킨다.
analogWrite(5,result);
analogWrite(6,0);
 }

int mymap(int value,int min_value,int max_value,int min_target,int max_ratget){
  float div(float)=max_value/max_target;
  return value/div;
}
