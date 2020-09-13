#include <Adafruit_NeoPixel.h>

// Variables LED
int numPixel = 3;
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
 
for (int i = 0; i<numPixel; i++) {
 tira.setPixelColor(i, tira.Color(160, 104, 212));
 tira.show();
 delay(200);
}



}
