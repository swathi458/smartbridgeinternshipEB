
const int trigpin=4;
const int echopin=5;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
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
  if(distance>=0&&distance<=5)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
  if(distance>=6&&distance<=10)
  
  {
    digitalWrite(13,HIGH);
  
  }
  else
  {
    digitalWrite(13,LOW);
  }
  if(distance>=11&&distance<=15)
  {
    digitalWrite(14,HIGH);
    
  }
  else
  {
    digitalWrite(14,LOW);
  }
  if(distance>=16&&distance<=150)
  {
    digitalWrite(15,HIGH);
  }
  else
  {
    digitalWrite(15,LOW);
  }

}
