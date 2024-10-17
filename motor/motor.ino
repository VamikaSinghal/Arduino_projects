#define in1 1
#define in2 2
#define in3 3
#define in4 4

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

  digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);
  //delay(200);
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,HIGH);
  //delay(1000);

}
