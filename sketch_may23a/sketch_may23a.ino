int val = 0 ;  
 void setup()  
 {  
   Serial.begin(9600); // sensor buart rate  
   pinMode(3,INPUT);  // LDR Sensor output pin connected  
   pinMode(4,OUTPUT); //  LED PIN  
 }  
 void loop()   
 {  
  val = digitalRead(3); // LDR Sensor output pin connected  
  Serial.println(val); //  see the value in serial mpnitor in Arduino IDE  
  delay(10);  
  if(val == 0 )  
  {  
   digitalWrite(4,HIGH); // LED ON  
   delay(1000);  
  }  
  else  
  {  
   digitalWrite(4,LOW); // LED OFF  
  }  
  }  
