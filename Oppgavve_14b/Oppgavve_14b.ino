void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
utskrift();
delay(10000);
}
void utskrift() {
  Serial.println("dette er en test på bruk av funksjoner");
  return;
}
