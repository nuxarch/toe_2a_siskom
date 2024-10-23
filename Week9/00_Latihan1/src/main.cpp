#include <Arduino.h>

#define PIN_LED_KUNING 13

// '0' / false /low/0 volt/gnd
// '1' / true /high/+5 volt/vcc
#define LED_ON digitalWrite(PIN_LED_KUNING, HIGH)
#define LED_OFF digitalWrite(PIN_LED_KUNING, LOW)

uint16_t jeda = 10;
void aktifkanLampu()
{
  // pin 13 difungsikan sbagai output
  pinMode(PIN_LED_KUNING, OUTPUT);
}
// dijalankan 1x

void kedipkan()
{
  LED_ON;
  Serial.println(" LED MENYALA");
  delay(jeda);
  // set 0v pada pin 13 u/mematikan led
  LED_OFF;
  Serial.println(" LED MATI");
  delay(jeda);
}
void setup()
{
  // aktifkan komunikasi serial kec = 9600 bps
  Serial.begin(9600);
  Serial.println(" .......APLIKASI AKTIF.....");
  aktifkanLampu();
}

// dijalankan selamanya
void loop()
{
  kedipkan();
}
