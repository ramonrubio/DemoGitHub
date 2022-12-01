#include <Arduino.h>

#define LED_DELAY_MS 500

void setup() {
  // put your setup code here, to run once:
  Serial.begin(112500);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(LED_DELAY_MS);
  digitalWrite(LED_BUILTIN, LOW);
  delay(LED_DELAY_MS);
  Serial.print(LED_DELAY_MS);
  //Hola estamos en el taller de GOT...soy Ramón

  //mi segundo cambio....porque la primera no me dejó....
}