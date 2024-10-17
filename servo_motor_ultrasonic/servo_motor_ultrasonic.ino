#include <Servo.h>

#define in1 6
#define in2 2
#define in3 3
#define in4 4

Servo myservo;
Servo myservo2;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  myservo.attach(9);
  myservo2.attach(10);
  Serial.begin(9600);

  pinMode(8,INPUT); //echo pin
  pinMode(7,OUTPUT); //trig pin
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  
  /*myservo.write(0);
  myservo.write(90);
  myservo2.write(180);
  myservo2.write(135);*/

  digitalWrite(7,LOW);
  delay(2);

  digitalWrite(7,HIGH);
  delay(10);
  digitalWrite(7, LOW);

  long time = pulseIn(8, HIGH);
  float dist = (time/2.0)*0.000343;
  //its 0.000343 since its in microseconds

  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" meters");


  if(dist>1){
    myservo.write(0);
    myservo2.write(135);
    myservo.write(90);
    myservo2.write(180);
  }
  else{
    myservo.write(135);
    myservo2.write(0);
    myservo.write(180);
    myservo2.write(90);
  }

  //delay(200);
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,HIGH);
  //delay(1000);

}
