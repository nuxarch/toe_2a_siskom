#include <Arduino.h>

#define PIN_LED_KUNING  13

// dijalankan 1x
void setup()
{
  // pin 13 difungsikan sbagai output
  pinMode(PIN_LED_KUNING,OUTPUT);


  // '0' / false /low/0 volt/gnd
  // '1' / true /high/+5 volt/vcc
  // set +5v pada pin 13 u/menyalakan led
  // digitalWrite(PIN_LED_KUNING, HIGH);

  // set 0v pada pin 13 u/mematikan led
  digitalWrite(PIN_LED_KUNING, LOW);
}

// dijalankan selamanya
void loop()
{
}
