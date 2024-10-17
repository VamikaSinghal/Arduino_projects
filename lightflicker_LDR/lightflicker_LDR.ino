//variables for all light pins
int blue = 2;
int red = 3;
int green = 4;
int yellow = 5;
int white = 6;

//array of variables
int arr[5] = {blue, red,green,yellow,white};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //initialise lights
  for(int i=0;i<=5;i++){
    pinMode(arr[i], OUTPUT);}
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //initialise the analog reader of LDR
  int a = analogRead(A0);
  //printing light intensity value
  Serial.println(a);

  //switching on bulbs depending on amt of light
  //less light, a = 900+ 
  //more light, a = 200-
  if (a<200){
    turnoff(1);
  }
  else if(a>200 && a<400){
    turnoff(2);
  }
  else if(a>400 && a<600){
    turnoff(3);
  }
  else if(a>600 && a<800){
    turnoff(4);
  }
  else{
    turnoff(5);
  }

}

//defined function to turn on lights
void turnoff(int j){
  for(int i=0; i<j; i++){
    digitalWrite(arr[i], HIGH);
  }
  delay(500);
  for(int i=0; i<j; i++){
    digitalWrite(arr[i], LOW);
  }
}
