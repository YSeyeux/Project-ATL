// Aangeven waar je Leds aan verbonden zijn
int sensorTemp=0;
int firstLed=12;
int secondLed=11;
int thirdLed=10;
int forthLed=9;
int fifthLed=8;

void setup()
{
 Serial.begin(9600);
 
 pinMode(firstLed,OUTPUT);
 pinMode(secondLed,OUTPUT);
 pinMode(thirdLed,OUTPUT);
 pinMode(forthLed,OUTPUT);
 pinMode(fifthLed,OUTPUT);

}
void loop()
{
 sensorTemp=analogRead(0);
 Serial.print(sensorTemp);
 
 // getal kan veranderd worden.
 if( sensorTemp<=203.5 )
 {
  digitalWrite(firstLed,HIGH);
  digitalWrite(secondLed,HIGH);
  digitalWrite(thirdLed,HIGH);
  digitalWrite(forthLed,HIGH);
  digitalWrite(fifthLed,LOW);
  Serial.println(" - RED LED ON");
 }
 
 else if( sensorTemp>204 && sensorTemp<205.5 )
 {
  digitalWrite(firstLed,HIGH);
  digitalWrite(secondLed,HIGH);
  digitalWrite(thirdLed,HIGH);
  analogWrite(forthLed,LOW);
  digitalWrite(fifthLed,HIGH);
  Serial.println(" - Orange LED ON");
 }
 
 else if( sensorTemp>=207 && sensorTemp<208.5 )
 {
  digitalWrite(firstLed,HIGH);
  digitalWrite(secondLed,HIGH);
  digitalWrite(thirdLed,LOW);
  digitalWrite(forthLed,HIGH);
  digitalWrite(fifthLed,HIGH);
  Serial.println(" - Yellow LED ON");
 }
 
 else if( sensorTemp>=210 && sensorTemp<211.5 )
 {
  digitalWrite(firstLed,HIGH);
  digitalWrite(secondLed,LOW);
  digitalWrite(thirdLed,HIGH);
  digitalWrite(forthLed,HIGH);
  digitalWrite(fifthLed,HIGH);
  Serial.println(" -Green LED ON");
 }
 
 else if( sensorTemp>=213 )
 {
  digitalWrite(firstLed,LOW);
  digitalWrite(secondLed,HIGH);
  digitalWrite(thirdLed,HIGH);
  digitalWrite(forthLed,HIGH);
  digitalWrite(fifthLed,HIGH);
  Serial.println(" -Blue LED ON");
 }

 delay(250);
}
