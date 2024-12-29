const boolean likerEpler = true; //sjekker om du liker epler eller ikke 
const boolean likerBananer = false; //Sjekker om du liker bananer eller ikke

void setup() {

  // open the serial port:

  Serial.begin(9600);
}

void loop() {

  // check for incoming serial data:
  if (likerEpler == true && likerBananer == false) {
    Serial.println("Du liker bare epler");
    delay(1000);
  }
  if (likerEpler == false && likerBananer == true) {
    Serial.println("Du liker bare Bananer");
    delay(1000);
  }
  if (likerEpler == true && likerBananer == true) {
    Serial.println("Du liker både epler og bananer");
    delay(1000);
  }
  if (likerEpler == false && likerBananer == false) {
    Serial.println("Du verken epler eller bananer");
    delay(1000);
  }
}
