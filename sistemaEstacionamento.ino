#include "LiquidCrystal.h"
LiquidCrystal lcd(12, 11,5, 4, 3, 2);

void setup() {

  lcd.begin(16, 2);

  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print("BEM VINDO");
  pinMode(A5, INPUT);
  pinMode(7, OUTPUT); //ledVermelho
  pinMode(10, OUTPUT); //ledVerde
}

void loop() {

  int vaga = analogRead(A5);
  Serial.println(vaga);
  if(vaga > 700) {
    digitalWrite(10,LOW);
    digitalWrite(7,HIGH);
    lcd.setCursor(0,1);
    lcd.print("ocupado");
  }
  else {
    digitalWrite(10,HIGH);
    digitalWrite(7,LOW);
    lcd.setCursor(0,1);
    lcd.print("livre");
  }

}
 
