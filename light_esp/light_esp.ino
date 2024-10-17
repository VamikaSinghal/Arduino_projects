// Define the LED pin
#define LED_PIN 2

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off
  digitalWrite(LED_PIN, LOW);
  // Wait for 1 second
  delay(1000);
}
