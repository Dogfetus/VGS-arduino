int tid; //vareiabel for tiden som telles ned
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  Serial.println("Arduino skal gi et lyd- og lyssignal etter 30 sekunder hvis knapp trykkes");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == LOW) { //hvis pinne 3 er LOW teller den ned med 1 per sekund
    for (tid = 0; tid <= 30; tid += 1) {
      Serial.println(tid);
      delay(1000);
    }

    if (tid == 30) {
      digitalWrite(2, HIGH); //setter buzzer høy
      digitalWrite(4, HIGH); //setter lysdiode høy
      delay(2000);
      digitalWrite(2, LOW); //venter 2 sekunder og setter buzzer low
      delay(1000);
      digitalWrite(4, LOW); //venter 3 sekunder og setter lysdiode low
      tid = 0;
    }
  }
}
