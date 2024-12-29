int antKringler(10);
int antBoller(20);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (antKringler > antBoller) {
    Serial.println("Det er flere kringler enn boller");
    delay(1000);
  }
  if (antKringler < antBoller) {
    Serial.println("Det er flere boller enn kringler");
    delay(1000);
  }
  if (antKringler == antBoller) {
    Serial.println("Det er like mange kringler og boller");
    delay(1000);
  }
}
