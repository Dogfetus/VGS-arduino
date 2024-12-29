byte antallTrykk;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW) {
    antallTrykk = antallTrykk + 1;
    Serial.print("Antall trykk = ");
    Serial.println(antallTrykk);
  }
  delay(500);
}
