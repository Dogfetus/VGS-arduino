
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH); //Grønn lampe tennes
if (digitalRead((2) == LOW)){
  digitalWrite(5, LOW); //Grønn lampe slukkes
  digitalWrite(4, HIGH); //Gul lampe tennes
  delay(4000);
  digitalWrite(4, LOW); //Gul lampe slukkes
  digitalWrite(3, HIGH); //Rød lampe tennes
  delay(20000);
  digitalWrite(3, LOW); //Rød lampe slukkes
  digitalWrite(4, HIGH); //Gul lampe tennes
  delay(4000);
  digitalWrite(4, LOW); //Gul lampe slukkes  
  }
}
