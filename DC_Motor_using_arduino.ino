void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(13,HIGH);
  delay(100);
  
  
  

}
