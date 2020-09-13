#include <Adafruit_NeoPixel.h>

int numPixel = 3;
int numPin = 2;

Adafruit_NeoPixel tira = Adafruit_NeoPixel(numPixel, numPin, NEO_GRB + NEO_KHZ800);


void setup() {

  tira.begin();
  tira.show();

}

void loop() {

//tira.setBrightness(30);
for (int i = 0; i<numPixel; i++) {
 tira.setPixelColor(i, tira.Color(255,0,0));
 tira.show();
 delay(1000);
}
 //tira.clear();
  
  //tira.setBrightness(20); //brillo global para toda la tira

  //for(int i = 0; i < numPixel; i++) {
  //tira.setPixelColor(i, 255,0,0); // posición R,G,B
  //tira.show();
  //delay(500);
  //}
}
