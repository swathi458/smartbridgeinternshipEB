int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 a= digitalRead(4);
 if(a==HIGH)
 {
  Serial.println("person detected");
  digitalWrite(2,HIGH);
  
 }
 
  else
  {
    Serial.println("person not detected");
    digitalWrite(2,LOW);
    
  }
  

}
