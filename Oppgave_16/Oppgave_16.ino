byte button_press; //variabel for antall press på første knapp
byte button_press2; //variabel for antall press på andre knapp

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //knapp 1
  pinMode(3, INPUT); //knapp 2
  pinMode(4, INPUT); //knapp 3
  pinMode(5, INPUT); //knapp 4
  pinMode(6, INPUT); //knapp 5
  pinMode(7, INPUT); //knapp 6
  pinMode(12, OUTPUT); //lysdiode
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH) { //sjekker om første knapp er trykket
    Serial.println("first");
    button_press += 1;
    delay(300);
  }

  else if (button_press > 1) { //hvis knappen blir trykket flere ganger resettes den
    button_press = 0;
  }

  if (digitalRead(4) == HIGH && button_press ==  1) { //sjekker om knapp 1 er trykket og knapp 2 er trykket
    Serial.println("second");
    button_press2 += 1;
    delay(300);
  }

  else if (button_press2 > 1) { //hvis knappen blir trykket flere ganger resettes den
    button_press2 = 0;
    button_press = 0;
  }

  if (digitalRead(6) == HIGH && button_press2 == 1) { //sjekker om knapp 1, 2 og tre har blitt trykket
    Serial.println("third");
    delay(300);
    digitalWrite(12, HIGH); //setter lysdiode HIGH
    delay(3000);
    digitalWrite(12, LOW); // setter lysdiode LOW
    button_press = 0; //resetter knapptrykkene
    button_press2 = 0;
  }
  
  if (digitalRead(7) == HIGH or digitalRead(5) == HIGH or digitalRead(3) == HIGH) { //resetter hvis noen andre knapper er trykket.
    Serial.println(" reset ");
    delay(300);
    button_press = 0;
    button_press2 = 0;
  }
}
