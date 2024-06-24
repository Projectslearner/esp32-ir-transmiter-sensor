/*
    Project name : ESP32 IR Transmiter Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-ir-transmiter-sensor
*/

#include <IRremoteESP8266.h>
#include <IRsend.h>

// Define the GPIO pin connected to the IR LED
const uint16_t IR_LED_PIN = 17; // GPIO pin 17 on ESP32

// Create an IRsend object
IRsend irsend(IR_LED_PIN);

void setup() {
  Serial.begin(115200); // Initialize serial communication
  delay(2000); // Wait for serial to initialize
}

void loop() {
  // Send an example NEC IR signal
  irsend.sendNEC(0x00FF30CF, 32); // Send NEC protocol, address and command

  Serial.println("IR signal sent!"); // Print message to serial monitor
  delay(5000); // Wait 5 seconds before sending the next signal
}
