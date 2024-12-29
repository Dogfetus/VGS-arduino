#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 4
byte button;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
}

void loop() {
lyslager(255, 0, 0);
lyslager(0, 255, 0);
lyslager(0, 0, 255);
lyslager(0, 100, 100);
lyslager(100, 100, 0);
lyslager(100, 0, 100);
lyslager(100, 10, 0);

}

void lyslager (int r, int g, int b) {
  pixels.setPixelColor(0, pixels.Color(r, g, b));
  pixels.setPixelColor(1, pixels.Color(r, g, b));
  pixels.setPixelColor(2, pixels.Color(r, g, b));
  pixels.setPixelColor(3, pixels.Color(r, g, b));
  pixels.show();
  delay(5000);
  return;
}
