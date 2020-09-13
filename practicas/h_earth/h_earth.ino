#include <Adafruit_NeoPixel.h>

// Variables LED
int numPixel = 19;
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
 

tira.setBrightness(5);
 
//for (int i = 0; i<numPixel; i++) {
 //tira.setPixelColor(i, tira.Color(160, 104, 212));
// tira.show();
// delay(200);
//}


 if(distancia <= 3 && distancia >= 0) {
   Serial.println("hola amiwis");
  for (int i = 0; i<numPixel; i++) {
 tira.setPixelColor(i, tira.Color(160, 104, 212));
 tira.show();
 delay(200);
}}
else if (distancia <= 15 && distancia >= 4) {
    for (int i = 0; i<numPixel; i++) {
 tira.setPixelColor(i, tira.Color(0, 0, 255));
 tira.show();
 delay(200);  
    }}
  else {
     Serial.println("chao amiwis");
    for (int i = 0; i<numPixel; i++) {
   tira.setPixelColor(i, tira.Color(0, 0, 0));
 tira.show();
 delay(200);
 tira.clear();
 }
 }



}
