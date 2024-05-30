
#include <ZMPT101B.h>
#define SENSITIVITY 500.0f
#include <LiquidCrystal_I2C.h>
#define Sensorpin A1
LiquidCrystal_I2C lcd(0x27, 16, 2);
// ZMPT101B sensor output connected to analog pin A0
// and the voltage source frequency is 50 Hz.
ZMPT101B voltageSensor(A0, 50.0);

void setup() {
  Serial.begin(9600);
  // Change the sensitivity value based on value you got from the calibrate
  // example.
  voltageSensor.setSensitivity(SENSITIVITY);

  lcd.init();
  lcd.backlight();
}

void loop() {
  // read the voltage and then print via Serial.
  float voltage = voltageSensor.getRmsVoltage();
  Serial.print("Ac_Voltage : ");
  Serial.println(voltage);
  //-----------------------------
  int value = analogRead(Sensorpin);
  double dcvoltage = map(value, 0, 1024, 0, 2500);
  dcvoltage /= 100;
 Serial.print("DC_Voltage : ");
  Serial.println(dcvoltage);
  lcd.setCursor(0, 0);
  lcd.print("Ac: ");
  lcd.print(voltage);
  lcd.setCursor(0, 1);
  lcd.print("DC: ");
  lcd.print(dcvoltage);

  delay(1000);
}
