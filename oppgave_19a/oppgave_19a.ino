boolean knapp; //lagrer om knappen er høy eller lav
boolean sikkerhet = 1; 
byte teller; //antall ganger knappen er trykket inn

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  knapp = digitalRead(3); //sjekker om knappen er høy eller lav: hvis ja, teller den.
  if (knapp != sikkerhet) {
    if (knapp == LOW) {
      teller += 1;
      Serial.println(teller);
    }
    delay(50);
}
  sikkerhet = knapp;
}
