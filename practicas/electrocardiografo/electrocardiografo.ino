#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



void setup() {
  lcd.begin(16, 2);//Tamaño del lcd, es este caso de 16col y 2filas

}

void loop() {

   lcd.setCursor(0,0); //ubica el cursor en la posision donde se quiere escribir col,fil
   lcd.print("Hola mamá");
   lcd.scrollDisplayLeft();
   delay(100);
}
