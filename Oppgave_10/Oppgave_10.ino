byte verdi(2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte verdi = random(0, 4);
  String valg;

  switch (verdi) {
    case 0:
      valg = "hoppe";
      break;
    case 1:
      valg = "løpe";
      break;
    case 2:
      valg = "ri";
      break;
    case 3:
      valg = "swømme";
      break;
  }
  Serial.println("Du liker best å " + valg);
  delay(1000);

}
