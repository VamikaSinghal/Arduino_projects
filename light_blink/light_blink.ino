/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);

  }


/*pseduo code
when it senses infrared
blink light 5 times for 0.5 sec each with 1 sec pause
stop for 1 sec
blink once for 3 sec
*/


// the loop function runs over and over again forever
void loop() {
  Serial.println(digitalRead(8));

if(digitalRead(8)==0){
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(400);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(50);                      // wait for a second
}
}
