#include <LiquidCrystal.h>
 // Definición de pines
int rs = 12;
int e = 11;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

 //Asignación de pines
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() {
  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hola Mundo");

}
