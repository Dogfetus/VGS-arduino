int tid; //variabel for antall sekunder som telles ned
int valgtid(0); //variabel for hvor mange sekunder som skal telles
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);           //buzzer
  pinMode(3, INPUT_PULLUP);     //knapp som starter nedtelling
  pinMode(4, OUTPUT);           //lys
  pinMode(5, INPUT_PULLUP);     //knapp som bestemmer total tid
  Serial.println("Arduino skal gi et lyd- og lyssignal etter X antall sekunder hvis knapp trykkes");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(5) == LOW) { //hvis pinne 5 er LOW blir total tid som telles ned plusset på med 10 sec
    valgtid += 10;
    if (valgtid > 100) {
      valgtid = 0;
    }
    Serial.print("Your new time is: ");
    Serial.println(valgtid);
    delay(400);

  }

  if (digitalRead(3) == LOW) { //hvis pinne 3 er LOW teller ned sekundene
    for (tid = 0; tid <= valgtid; tid += 1) {
      Serial.println(tid);
      delay(1000);

      if (tid == valgtid) {
        digitalWrite(2, HIGH); //setter buzzer høy
        digitalWrite(4, HIGH); //setter lysdiode høy
        delay(2000);
        digitalWrite(2, LOW); //setter buzzer lav etter 2 sec
        delay(1000);
        digitalWrite(4, LOW); //setter lysdiode lav etter 3 sec
        tid = 0;
      }
    }
  }
}
