byte a(0); //anatall trykk på knapp 2
byte b(0); //anatall trykk på knapp 3
byte c(0); //anatall trykk på knapp 4
byte d(0); //anatall trykk på knapp 5
byte telleVerdi[4];

boolean knapp1; //setter inn verdien i pinne 2
boolean knapp2; //setter inn verdien i pinne 3
boolean knapp3; //setter inn verdien i pinne 4
boolean knapp4; //setter inn verdien i pinne 5
boolean knapp5; //setter inn verdien i pinne 6
boolean sikkerhetsknapp1 = 1;
boolean sikkerhetsknapp2 = 1;
boolean sikkerhetsknapp3 = 1;
boolean sikkerhetsknapp4 = 1;
boolean sikkerhetsknapp5 = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); //pinne for knapp 1
  pinMode(3, INPUT_PULLUP); //pinne for knapp 2
  pinMode(4, INPUT_PULLUP); //pinne for knapp 3
  pinMode(5, INPUT_PULLUP); //pinne for knapp 4
  pinMode(6, INPUT_PULLUP); //pinne for knapp 5
  Serial.println("Her kommer en utskrift av antall trykk på hver av pushbryterene: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  telleVerdi[0] = a; //setter første verdien i tabellen til knapp 2
  telleVerdi[1] = b; //setter andre verdien i tabellen til knapp 3
  telleVerdi[2] = c; //setter tredje verdien i tabellen til knapp 4
  telleVerdi[3] = d; //setter fjerde verdien i tabellen til knapp 5

  knapp1 = digitalRead(3); //hvis knapp 2 er høy teller den 1 gang
  if (knapp1 != sikkerhetsknapp1) {
    if (knapp1 == LOW) {
      a += 1;
    }
    delay(50);
  }
  sikkerhetsknapp1 = knapp1;

  knapp2 = digitalRead(4); //hvis knapp 3 er høy teller den 1 gang
  if (knapp2 != sikkerhetsknapp2) {
    if (knapp2 == LOW) {
      b += 1;
    }
    delay(50);
  }
  sikkerhetsknapp2 = knapp2;

  knapp3 = digitalRead(5); //hvis knapp 4 er høy teller den 1 gang
  if (knapp3 != sikkerhetsknapp3) {
    if (knapp3 == LOW) {
      c += 1;
    }
    delay(50);
  }
  sikkerhetsknapp3 = knapp3;

  knapp4 = digitalRead(6); //hvis knapp 5 er høy teller den 1 gang
  if (knapp4 != sikkerhetsknapp4) {
    if (knapp4 == LOW) {
      d += 1 +;
    }
    delay(50);
  }
  sikkerhetsknapp4 = knapp4;

  knapp5 = digitalRead(2); //hvis knapp 1 er høy printer den tabellen:
  if (knapp5 != sikkerhetsknapp5) {
    if (knapp5 == LOW) {
      for (byte i = 0; i < 4; i += 1) {
        Serial.print("Antall trykk på knapper nr ");
        Serial.print(i);
        Serial.print(" =   ");
        Serial.println(telleVerdi[i]);
      }
      a = 0;
      b = 0;
      c = 0;
      d = 0;
    }
    delay(50);
  }
  sikkerhetsknapp5 = knapp5;
}
