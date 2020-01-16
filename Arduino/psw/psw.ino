void setup() {
 pinMode(5, OUTPUT) ; // 모터 컨트롤 위하여 5번을 출력으로
 pinMode(6, OUTPUT) ; // 모터 컨트롤 위하여 6번을 출력으로
 pinMode(7, OUTPUT) ; // 모터 컨트롤 위하여 7번을 출력으로
}
void loop() {
    psw(5,6,7);
 }


  
 void psw(int a,int b,int c){
  for(int ii=0;ii<=5;ii++){
  for(int pattern1=0;pattern1<=10;pattern1++){
  digitalWrite(a, 1);   
  delay(10);                       
  digitalWrite(a, 0);    
  delay(10);

  digitalWrite(b, 1);   
  delay(50);                       
  digitalWrite(b, 0);    
  delay(50);   
                                 
  digitalWrite(c, 1);  

  }
    for(int pattern2=0;pattern2<=10;pattern2++){
  digitalWrite(a, 1);   
  delay(60);  
  digitalWrite(b, 1);   
  delay(60);                         


  digitalWrite(a, 0);    
  delay(10);                   
  digitalWrite(b, 0);    
  delay(10);   
                                 
  digitalWrite(c, 1); 
  delay(100); 
   digitalWrite(c, 0); 
  delay(100);
  }  
 for(int pattern3=0;pattern3<=10;pattern3++){
  digitalWrite(a, 1);   
  delay(100);  
  digitalWrite(b, 1);   
  delay(100);                         
  digitalWrite(c, 1); 
  delay(100); 

  digitalWrite(a, 0);    
  delay(1);                   
  digitalWrite(b, 0);    
  delay(1);   
  digitalWrite(c, 0); 
  delay(1);                                
  }
  }

  }    
                        
