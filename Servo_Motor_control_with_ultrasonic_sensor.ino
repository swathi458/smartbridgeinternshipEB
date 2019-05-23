#include <Servo.h>
const int trigpin=4;
const int echopin=5;
long duration;
int distance;
Servo myservo;
int pos=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(115200);
   myservo.attach(13);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  //calculating the distance
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if(distance<=100)
    for(pos=0;pos<=180;pos+=1)
  {
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  }
  
  for(pos=180;pos>=0;pos=-1)
  {
    myservo.write(pos);
   if(pos==90)
    delay(200);
    delay(15);
  }




}
