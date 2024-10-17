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

  int tones[] = {261, 261, 293, 261, 349, 329, 261, 261, 293, 261, 392, 349, 261, 261, 523, 440, 349, 329, 293, 466, 466, 440, 349, 392, 349};
  for (int i=0; i<25; i++){
    tone(13, tones[i],500);  
    delay(400);
  }
  noTone(13);//to stop audio
  delay(2000);
}
