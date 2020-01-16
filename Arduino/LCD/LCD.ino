//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  lcd.backlight();
  

}


void loop()
{
int count=0;
int tmp;
int value = random(0, 3); 
if(value==0){
  lcd.setCursor(0,1);
  lcd.print("ZERO");
    lcd.setCursor(0,0);
  lcd.print("0 is random");
  count=value;
}
if(value==1){
  lcd.setCursor(0,1);
  lcd.print("random1");
    lcd.setCursor(0,0);
  lcd.print("1 is random!");
    count=value;
}
if(value==2){
  lcd.setCursor(0,1);
  lcd.print("random2");
    lcd.setCursor(0,0);
  lcd.print("2 is random");
    count=value;
}
if(value==3){
  lcd.setCursor(0,1);
  lcd.print("random3");
    lcd.setCursor(0,0);
  lcd.print("3 is random");
    count=value;
}
  for(int cnt=0;cnt<10;cnt++){
  lcd.scrollDisplayRight();
  delay(250);
}
lcd.clear();
value = random(4, 6); 
if(value==4){
  lcd.setCursor(0,1);
  lcd.print("random4");
    lcd.setCursor(0,0);
  lcd.print("4 is random");
    count=value;
}
if(value==5){
  lcd.setCursor(0,1);
  lcd.print("random5");
    lcd.setCursor(0,0);
  lcd.print("5 is random");
    count=value;
}
if(value==6){
  lcd.setCursor(0,1);
  lcd.print("random6");
    lcd.setCursor(0,0);
  lcd.print("6 is random");
    count=value;
}
  for(int cnt=0;cnt<10;cnt++){
  lcd.scrollDisplayLeft();
  delay(250);
}
lcd.clear();
for(int j=0;j<=10;j++){
int i = random(10, 100);
  lcd.setCursor(0,1);
  lcd.print("random");  
  lcd.print(i);
  lcd.setCursor(0,0);
  lcd.print(i);
  lcd.print(" is random");
  delay(100);
  for(int cnt=0;cnt<10;cnt++){
  lcd.scrollDisplayRight();
  delay(200);
}
}
lcd.clear();




}
