void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //push-bryter
  pinMode(3, OUTPUT); //rødt lys
  pinMode(4, OUTPUT); //gutl lys
  pinMode(5, OUTPUT); //Grønt lys
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  if (digitalRead(2) == HIGH) {
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(4000);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(20000);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(4000);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
}
