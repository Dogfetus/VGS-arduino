#include <LM75A.h>

LM75A lm75a_sensor(false, false, false);
void setup(void)
{
  Serial.begin(9600);
  Serial.println("Temperatures will be displayed every second:");
}

void loop()
{
  float temperature_in_degrees = lm75a_sensor.getTemperatureInDegrees();

  if (temperature_in_degrees == INVALID_LM75A_TEMPERATURE) {
    Serial.println("Error while getting temperature");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature_in_degrees);
    Serial.print(" degrees (");
    Serial.print(LM75A::degreesToFahrenheit(temperature_in_degrees));
    Serial.println(" fahrenheit)");
  }

  delay(5000);
}
