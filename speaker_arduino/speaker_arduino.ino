//
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int tones[] = {261, 261, 293, 261, 349, 329, 261, 261, 293, 261, 392, 349, 261, 261, 523, 440, 349, 329, 293, 466, 466, 440, 349, 392, 349};
  for (int i=0; i<25; i++){
    tone(8, tones[i],500);  
    delay(500);
  }
  noTone(8);//to stop audio
  delay(2000);
}
