void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("LOW");
digitalWrite(2,LOW);
delay(100);
Serial.println("HIGH");
digitalWrite(2,HIGH);
delay(100);
}
