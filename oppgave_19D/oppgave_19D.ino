#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 8
byte button;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
}

void loop() { //kaller funksjon for å skru på lys i forskjellige farger:
  lyslager(255, 0, 0); //lager RØDT lys  
  lyslager(0, 255, 0); //lager GRØNT lys
  lyslager(0, 0, 255); //lager BLÅTT lys
}

void lyslager (int r, int g, int b) { //funksjon for å skru på lys i de forskjellige fargene:
  for (int i = 0; i < 8; i += 1) {
    pixels.setPixelColor(i, pixels.Color(r, g, b));
  }
  pixels.show();
  delay(5000);
}
