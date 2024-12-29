byte x(0); //knapp A
byte y(0); //knapp B


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP); // summeringsknapp
  pinMode(2, INPUT_PULLUP); //knapp for x antall
  pinMode(3, INPUT_PULLUP); //knapp for y antall
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == LOW) {          //legger til 1 verdi på knapp B
    y += 1;
    Serial.print("Antall trykk B = ");
    Serial.println(y);
    delay(500);
  }
  if (digitalRead(2) == LOW) {         //legger til 1 verdi på knapp A
    x += 1;
    Serial.print("Antall trykk A = ");
    Serial.println(x);
    delay(500);
  }
  if (digitalRead(4) == LOW) {         //legger sammen verdiene
    Serial.print("Antall trykk knapp A + knapp B = ");
    byte utregning = summering(x, y);
    Serial.println(utregning);
    delay(500);
  }
}
byte summering (byte knappA, byte knappB) {  //funksjon for å legge sammen verdiene.
  byte sum = knappA + knappB;
  return sum;
}
