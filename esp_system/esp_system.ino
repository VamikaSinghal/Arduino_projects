
int red = 2;
int blue = 5;

void setup() {

  //led
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);

  //uv sensor
  pinMode(14,INPUT); //echo pin
  pinMode(12,OUTPUT); //trig pin
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,LOW);
  delay(2);
  digitalWrite(12,HIGH);
  delay(10);
  digitalWrite(12, LOW);


  long time = pulseIn(14, HIGH);
  float dist = (time/2.0)*0.000343;
  //its 0.000343 since its in microseconds

  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" meters");

  if(dist>0.0 && dist<0.5){
    digitalWrite(red,HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    digitalWrite(blue,HIGH);
    delay(1000);
    digitalWrite(blue, LOW);

    tone(13, 1500);
  }
  else if (dist>0.5 && dist<1){
    digitalWrite(red,HIGH);
    delay(500);
    digitalWrite(red, LOW);
    tone(13, 500);
  }
  else{
    digitalWrite(blue,HIGH);
    delay(500);
    digitalWrite(blue, LOW);
    tone(13, 200);
    
  }

}
