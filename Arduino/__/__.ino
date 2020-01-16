// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
//  int aaa=3;
//  Serial.println(aaa);
//  delay(1000);//1초마다 찍히도록
//1부터20까지 소수출력 프로그램
//
//int num=3;
//int i;
//
//  for(i=1;i<=num;i++){
//  Serial.println(i);
//  delay(1000);
//  }


//
//  int num=7;
//  int flag=0; //0이면 소수,1이면 소수아님
//  for(int i=2; i<num;i++){  //2부터 자기자신 전까지 반복함 2 3 4 5 6
//    if(flag%i==0) //2부터 자기자신 전까지 나눠봐서 그중에 나눠지는 수가 있으면
//    flag=1;       //소수가 아님
//    }
//    if(flag==1)
//    Serial.println("no");
//    else
//    Serial.println("yes");
//    delay(1000);
//    }

  int num=0;
  int flag=0; //0이면 소수,1이면 소수아님
  for(int j=2;j<21;j++){
  flag=0;
  for(int i=2; i<j;i++){  //2부터 자기자신 전까지 반복함 2 3 4 5 6
    if(j%i==0) //2부터 자기자신 전까지 나눠봐서 그중에 나눠지는 수가 있으면
    flag=1;       //소수가 아님
    }
    if(flag!=1)
    Serial.println(j);
    delay(1000);
    }
}
















 
