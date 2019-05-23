
const int trigpin=4;
const int echopin=5;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  //calculating the distance
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if(distance>=200)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
  digitalWrite(2,LOW);
  }

}
