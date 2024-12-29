int x(1); //verdi for å sjekke om loopen er på første eller andre runde
int y; //nummer som summeres for hver runde i for loopen
int z; //grenser på hvor lenge for loopen skal telle
int i; //selve telleren
byte nummer; //setter verdien på i I starten

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT); //utgangen til Bein A
  pinMode(3, OUTPUT); //utgangen til Bein B
  pinMode(4, OUTPUT); //utgangen til Bein G
  pinMode(5, OUTPUT); //utgangen til Bein E
  pinMode(6, OUTPUT); //utgangen til Bein D
  pinMode(7, OUTPUT); //utgangen til Bein F
  pinMode(8, OUTPUT); //utgangen til Bein G
  pinMode(9, OUTPUT); //utgangen til Bein DP
  digitalWrite(9, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (x == 2) {
    y = -1;
    x = 0;
    z = 1;
    nummer = 9;
  }
  else if (x == 1) {
    y = 1;
    z = 9;
    nummer = 1;
  }
  for (i = nummer; i != z; i += y) {
    switch (i) {
      case 0:
        tallviser (1, 1, 1, 1, 1, 1, 0); //displayer tallet 0
        break;
      case 1:
        tallviser (0, 1, 1, 0, 0, 0, 0); //displayer tallet 1
        break;
      case 2:
        tallviser (1, 1, 0, 1, 1, 0, 1); //displayer tallet 2
        break;
      case 3:
        tallviser (1, 1, 1, 1, 0, 0, 1); //displayer tallet 3
        break;
      case 4:
        tallviser (0, 1, 1, 0, 0, 1, 1); //displayer tallet 4
        break;
      case 5:
        tallviser (1, 0, 1, 1, 0, 1, 1); //displayer tallet 5
        break;
      case 6:
        tallviser (1, 0, 1, 1, 1, 1, 1); //displayer tallet 6
        break;
      case 7:
        tallviser (1, 1, 1, 0, 0, 0, 0); //displayer tallet 7
        break;
      case 8:
        tallviser (1, 1, 1, 1, 1, 1, 1); //displayer tallet 8
        break;
      case 9:
        tallviser (1, 1, 1, 0, 0, 1, 1); //displayer tallet 9
        break;
    }
  }
  x += 1;
}

void tallviser (bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
  digitalWrite(2, a); //setter bein A høy
  digitalWrite(3, b); //setter bein B høy
  digitalWrite(4, c); //setter bein G høy
  digitalWrite(5, d); //setter bein E høy
  digitalWrite(6, e); //setter bein D høy
  digitalWrite(7, f); //setter bein F høy
  digitalWrite(8, g); //setter bein G høy
  delay(500);
}
