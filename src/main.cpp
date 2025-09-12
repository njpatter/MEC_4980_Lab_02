#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting Reads");
}

int ledBrightness = 0;

void loop() {
  delay(250); 
  int reading = analogRead(A0);
  Serial.print("Result: ");
  Serial.print(reading/16);
  Serial.println(" ");
  analogWrite(LED_BUILTIN, reading/16); 
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y * y;
}