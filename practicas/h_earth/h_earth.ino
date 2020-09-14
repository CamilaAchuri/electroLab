#include <Adafruit_NeoPixel.h>

// Variables LED
int numPixel = 18;
int numPin = 2;


// Variables de sensor de proximidad
int trig = 10;
int eco = 9;
int duracion;
int distancia;


Adafruit_NeoPixel tira = Adafruit_NeoPixel(numPixel, numPin, NEO_GRB + NEO_KHZ800);


void setup() {
  tira.begin();
  tira.show();

  pinMode(trig, HIGH);
  pinMode(eco, INPUT);
  Serial.begin(9600);
}

void loop() {

 digitalWrite(trig, HIGH);
 delay(1);
 digitalWrite(trig, LOW);
 duracion = pulseIn(eco, HIGH);
 distancia = duracion / 58.2;
 Serial.println(distancia);
 delay(200);
 

tira.setBrightness(distancia);
 
//for (int i = 0; i<numPixel; i++) {
 //tira.setPixelColor(i, tira.Color(160, 104, 212));
// tira.show();
// delay(200);
//}


 if(distancia <= 5 && distancia >= 0) {
   Serial.println("1");
  for (int i = 0; i<4; i++) {
 tira.setPixelColor(i, tira.Color(150, 115, 165)); //violetica
 tira.show();
 delay(500);
 tira.clear();
}}
else if (distancia <= 9  && distancia >= 6) {
  Serial.println("2");
  for (int i = 4; i<6; i++) {
 tira.setPixelColor(i, tira.Color(255, 255, 255)); // algo así como azul
 tira.show();
 delay(500);
 tira.clear();  
    }}
else if (distancia <= 17  && distancia >= 10) {
  Serial.println("3");
  for (int i = 6; i<9; i++) {
 tira.setPixelColor(i, tira.Color(34, 195, 195)); // algo así como azul
 tira.show();
 delay(500);
 tira.clear();  
    }}
 else if (distancia <= 21  && distancia >= 18) {
  Serial.println("4");
  for (int i = 9; i<11; i++) {
 tira.setPixelColor(i, tira.Color(255, 255, 255)); // algo así como azul
 tira.show();
 delay(500);
 tira.clear();  
    }}
else if (distancia <= 29 && distancia >= 22) {
   Serial.println("5");
    for (int i = 10; i<13; i++) {
 tira.setPixelColor(i, tira.Color(105, 155, 140)); // verdecito
 tira.show();
 delay(500);
 tira.clear();  
    }}
   else if (distancia <= 33  && distancia >= 30) {
  Serial.println("6");
  for (int i = 10; i<13; i++) {
 tira.setPixelColor(i, tira.Color(255, 255, 255)); // algo así como azul
 tira.show();
 delay(500);
 tira.clear();  
    }}
 else if (distancia <= 40 && distancia >= 34) {
   Serial.println("7");
    for (int i = 13; i<15; i++) {
 tira.setPixelColor(i, tira.Color(170, 115, 100)); // cafcito
 tira.show();
 delay(500);
 tira.clear();  
    }}
  else if (distancia <= 45  && distancia >= 41) {
  Serial.println("8");
  for (int i = 15; i<18; i++) {
 tira.setPixelColor(i, tira.Color(0, 0, 0)); // algo así como azul
 tira.show();
 delay(500);
 tira.clear();  
    }}
else if (distancia <= 55 && distancia >= 46) {
   Serial.println("9");
    for (int i = 14; i<=numPixel; i++) {
 tira.setPixelColor(i, tira.Color(250, 150, 150)); // amarillento.cafe
 tira.show();
 delay(500);
 tira.clear();  
    }}
else {
     Serial.println("chao amiwis");
//     return();
  //  for (int i = 0; i<numPixel; i++) {
  // tira.setPixelColor(i, tira.Color(255, 255, 255)); // fin
 //tira.show();
 //delay(500);
 //tira.clear();
 //}
 }

//tira.Color(250, 65, 30) rojo
//170, 115, 500
}
