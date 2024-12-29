#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 4
byte button;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  pixels.clear();

  if (digitalRead(5) == LOW && button < 3) {
    button += 1;
    delay(300);
  }

  if (button >= 3) {
    button = 0;
  }

  switch (button) {
    case 1:
      pixels.setPixelColor(0, pixels.Color(0, 255, 0));
      pixels.setPixelColor(1, pixels.Color(0, 255, 0));
      pixels.setPixelColor(2, pixels.Color(0, 255, 0));
      pixels.setPixelColor(3, pixels.Color(0, 255, 0));
      pixels.show();
      break;
    case 2:
      pixels.setPixelColor(0, pixels.Color(255, 0, 0));
      pixels.setPixelColor(1, pixels.Color(255, 0, 0));
      pixels.setPixelColor(2, pixels.Color(255, 0, 0));
      pixels.setPixelColor(3, pixels.Color(255, 0, 0));
      pixels.show();
      break;
    case 3:
      pixels.setPixelColor(0, pixels.Color(0, 0, 255));
      pixels.setPixelColor(1, pixels.Color(0, 0, 255));
      pixels.setPixelColor(2, pixels.Color(0, 0, 255));
      pixels.setPixelColor(3, pixels.Color(0, 0, 255));
      pixels.show();
      break;
  }
}
