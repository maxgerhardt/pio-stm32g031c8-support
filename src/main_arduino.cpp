#include <Arduino.h>

/* blink the define builtin LED as example */
#define LED_ARDUINO_PIN_NUM LED_BUILTIN

void setup() {
    pinMode(LED_ARDUINO_PIN_NUM, OUTPUT);
    //can also use PinName enums
    //digitalWriteFast(PC_1, HIGH);
    //maps to Serial1 aka UART1 with TX=PB6 and RX=PB7
    //see variant.h
    Serial.begin(115200);
    Serial.println("Hello, world!");
}

void loop() {
    digitalWrite(LED_ARDUINO_PIN_NUM, HIGH);
    delay(500);
    digitalWrite(LED_ARDUINO_PIN_NUM, LOW);
    delay(500);
}