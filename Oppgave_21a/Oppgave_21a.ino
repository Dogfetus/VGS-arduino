#include <Temperature_LM75_Derived.h>
Generic_LM75 temperature;

void setup() {
  while(!Serial) {}
  
  Serial.begin(9600);

  Wire.begin();
}

void loop() {
  Serial.print("Temperatur = ");
  Serial.print(temperature.readTemperatureC());
  Serial.print(" C");   
  Serial.print("\r");
  delay(5000);
}
