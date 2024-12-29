int antKringler(10);
int antBoller(20);

void setup() {

  // open the serial port:

  Serial.begin(9600);
}

void loop() {

  // check for incoming serial data:
  if (antKringler > antBoller) {
    Serial.println("Det er flere kringler enn boller");
    delay(1000);
  }
  else if (antKringler < antBoller) {
    Serial.println("Det er flere boller enn kringler");
    delay(1000);
  }
  else {
    Serial.println("Det er like mange kringler og boller");
    delay(1000);
  }
}
