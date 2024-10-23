#include <Arduino.h>

#define PIN_LED_KUNING 13

// dijalankan 1x
void setup()
{
  // aktifkan komunikasi serial kec = 9600 bps
  Serial.begin(9600);
  Serial.println(" .......APLIKASI AKTIF.....");

  // pin 13 difungsikan sbagai output
  pinMode(PIN_LED_KUNING, OUTPUT);

  // '0' / false /low/0 volt/gnd
  // '1' / true /high/+5 volt/vcc
}

// dijalankan selamanya
void loop()
{
  // set +5v pada pin 13 u/menyalakan led
  digitalWrite(PIN_LED_KUNING, HIGH);
  Serial.println(" LED MENYALA");
  delay(500);
  // set 0v pada pin 13 u/mematikan led
  digitalWrite(PIN_LED_KUNING, LOW);
  Serial.println(" LED MATI");
  delay(500);
}
