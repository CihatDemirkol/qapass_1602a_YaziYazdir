#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 7, 9, 10, 11, 12, 6, 5, 4, 3);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  lcd.print("Hello World");
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
