#include <Servo.h>

const int lightPin = A0;
int lightVal;
Servo myServo;
const int servoPin = 9;
int pos = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  myServo.write(0);
  // put your setup code here, to run once:

}

void loop() {
  lightVal = analogRead(lightPin);
  pos = (180/1023.) * lightVal;
  Serial.println(pos);
  myServo.write(pos);
  delay(100);
  // put your main code here, to run repeatedly:

}
