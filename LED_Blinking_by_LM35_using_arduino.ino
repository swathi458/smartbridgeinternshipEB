int a;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(13,INPUT);
}

void loop() {
  a=analogRead(13);
  Serial.println(a);
  // put your main code here, to run repeatedly:
if(a>=180){
 digitalWrite(2,HIGH);
 delay(100);
}
else{
   digitalWrite(2,LOW);
   delay(100);
}
}
