byte tall_1(2); //2
byte tall_2(5); //5 
byte tall_3; //tall som senere får verdi

char kar1(72); // bokstaven H
char kar2(101); // bokstaven e
char kar3(108); // bokstaven l
char kar4(111); // bokstaven o
char kar5(32); // mellomrom

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(tall_3 = tall_1 + tall_2);
  Serial.print(kar5);
  Serial.print(kar1);
  Serial.print(kar2);
  Serial.print(kar3);
  Serial.print(kar3);
  Serial.println(kar4);
  delay(1000);
}
