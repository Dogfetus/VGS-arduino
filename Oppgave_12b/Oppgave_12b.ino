void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(2) == LOW) {
    Serial.println("Knappen er trykket inn");
    delay(2000);
  }
}