#include <Servo.h>
//create servo object
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*int i=0;
  while (i!=1){
    myservo.write(i);
    i+=90;
    delay(1000);
  }
  */

  int x = Serial.parseInt();
  myservo.write(x);
}
