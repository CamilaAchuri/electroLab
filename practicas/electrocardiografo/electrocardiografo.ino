#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int corazon = A0; //Sensor conectado a pin A0
int led = 13; // Led 
int pulsoMaximo = 350; //Esto se debe ajustar segun la sensibilidad del sensor

// codigo para hacer dibujito <3
byte heart[8] = {
 0b00000,
 0b01010,
 0b11111,
 0b11111,
 0b11111,
 0b11111,
 0b00100,
 0b00000
};

void setup() {                   
 Serial.begin(9600);       // Puerto serial configurado a 9600 Baudios
 pinMode(led, OUTPUT);     //Iniciando led como variable de salida
 pinMode(corazon, INPUT);  //Iniciando conteo de pulsos como variable de entrada
 lcd.begin(16,2);          //iniciando pantalla
 lcd.createChar(0, heart); 
 lcd.setCursor(5,0);       //Inicio de cursos columna 5 fila 1

 lcd.print("Pulsos "); //Mostrando titulo en pantalla
 lcd.write(byte(0));   //Dibujando <3
 delay(60);
}

void loop() {

 corazon = analogRead(corazon);

 if (corazon > pulsoMaximo) {
 digitalWrite(led, HIGH);
 delay(30);
 } else {
 digitalWrite(led, LOW);
 }
 //delay(20);
 lcd.setCursor(7,1);      //Inicio de texto en fila 2 columna 7
 lcd.print(corazon);      //Mostrando conteo de pulsos
 Serial.println(corazon); //grafico por defecto de herramientas-SeriaPlotter
 delay(500);
}
