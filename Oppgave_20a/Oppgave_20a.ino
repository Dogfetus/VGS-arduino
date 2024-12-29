void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); //utgangen til Bein A
  pinMode(3, OUTPUT); //utgangen til Bein B
  pinMode(4, OUTPUT); //utgangen til Bein G
  pinMode(5, OUTPUT); //utgangen til Bein E
  pinMode(6, OUTPUT); //utgangen til Bein D
}

void loop() {
  // put your main code here, to run repeatedly:
    /*kunne også ha brukt:
    for (int i = 1; i<6;i +=1){
    digitalWrite(i, HIGH);
    }*/
  digitalWrite(2, HIGH); //setter bein A høy
  digitalWrite(3, HIGH); //setter bein B høy
  digitalWrite(4, HIGH); //setter bein G høy
  digitalWrite(5, HIGH); //setter bein E høy
  digitalWrite(6, HIGH); //setter bein D høy
}
