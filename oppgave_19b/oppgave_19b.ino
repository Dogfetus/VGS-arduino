byte var_1(2); //variabel med verdi 2
byte var_2(4); //variabel med verdi 4
byte var_3(7); //variabel med verdi 7
byte var_4(9); //variabel med verdi 9
byte var_5(10); //variabel med verdi 10
byte var_6(23); //variabel med verdi 23
byte var_7(45); //variabel med verdi 45
byte tabell[7]; //tabell som skal inneholde alle variablene
byte x(1); //variabel som stopper loopen
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Her kommer en utskrift med oversikt over innholdet i tabellen:");
}

void loop() {
  // put your main code here, to run repeatedly:
  tabell[0] = var_1; //Setter inn verdien 2
  tabell[1] = var_2; //Setter inn verdien 4
  tabell[2] = var_3; //Setter inn verdien 7
  tabell[3] = var_4; //Setter inn verdien 9
  tabell[4] = var_5; //Setter inn verdien 10
  tabell[5] = var_6; //Setter inn verdien 23
  tabell[6] = var_7; //Setter inn verdien 45

  if (x == 1) {
    for (int i = 0; i < 7; i += 1) {
      Serial.print("Innhold i tabell posisjonene ");
      Serial.print(i);
      Serial.print(":   ");
      Serial.println(tabell[i]);
      delay(50);
    }
  x = 0;
  }
}
