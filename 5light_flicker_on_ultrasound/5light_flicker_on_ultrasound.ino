int red = 2;
int yellow = 3;
int blue = 4;
int green = 5;
int white = 6;
int xInteger;


int arr[6] = {0,red, yellow, blue, green, white};


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<=6;i++){
    pinMode(arr[i], OUTPUT);}
  
 
  pinMode(13, OUTPUT);
  pinMode(8,INPUT); //echo pin
  pinMode(9,OUTPUT); //trig pin
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9,LOW);
  delay(2);

  digitalWrite(9,HIGH);
  delay(10);
  digitalWrite(9, LOW);


  long time = pulseIn(8, HIGH);
  float dist = (time/2.0)*0.000343;
  //its 0.000343 since its in microseconds

  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" meters");

  delay(5000);

  if(dist>0.0 && dist<1.0){
      int i = 1;
  }
  else if (dist>1 && dist<2){
      int i = 2;
  }
  else if (dist>2 && dist<3){
      int i = 3;
  }
  else if (dist>3 && dist<4){
      int i = 4;
  }
  else{
      int i = 5;
  }

  digitalWrite(arr[i],HIGH);
  delay(500);
  digitalWrite(arr[i], LOW);
  /*
  int i = random (0,5);
  digitalWrite(arr[i],HIGH);
  delay(100);
  digitalWrite(arr[i], LOW);
  */
}
