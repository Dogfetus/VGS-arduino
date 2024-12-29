#include <Temperature_LM75_Derived.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
Generic_LM75 temperature;

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
}


void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Celsius: ");
  lcd.print(temperature.readTemperatureC());
  delay(250);
}
