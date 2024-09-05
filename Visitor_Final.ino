54#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,16,2);
int in=3;
int out=5;
int in_val;
int out_val;
int led=6;
int count=0;
void setup() {
// put your setup code here, to run once:

pinMode(in,INPUT);
pinMode(out,INPUT);
pinMode(led,OUTPUT);
lcd.init();
lcd.backlight();
}
void loop() {
// put your main code here, to run repeatedly:

in_val=digitalRead(in);
out_val=digitalRead(out);

//PAGE 2

if(in_val==LOW) {
count++;
lcd.print("no of people");
lcd.setCursor(0,1);
lcd.print(count);
delay(1000);
lcd.clear();
}
else if(out_val==LOW) {
count--;
lcd.print("no of people");
lcd.setCursor(0,1);
lcd.print(count);
delay(1000);
lcd.clear();
}
else if(count==0) {
digitalWrite(led,HIGH);
lcd.setCursor(0,0);
lcd.print("no one in room");
lcd.setCursor(0,1);
lcd.print("led is off");
delay(1000);

//PAGE 3

lcd.clear();
}
else{
digitalWrite(led,LOW);
}
}