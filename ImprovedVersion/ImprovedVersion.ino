#include <Servo.h>

const int lightPin = A0;
int lightVal;    
Servo myServo;  
const int servoPin = 9;   
const int ledPin = 10;             
int pos;                   
int ledBrightness;        
         

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(ledPin, OUTPUT);
  myServo.attach(servoPin);
  myServo.write(0);  
  // put your setup code here, to run once:
      
}

void loop() {
  lightVal = analogRead(lightPin);                  
  pos = (180/1023.) * lightVal;         
  ledBrightness = 255 - (lightVal/4) 

  myServo.write(pos);
  analogWrite(ledPin, ledBrightness);

  Serial.print("Light Value: ");
  Serial.print(lightVal);
  Serial.print(" | Servo Position: ");
  Serial.print(pos);
  Serial.print(" deg | LED Brightness: ");
  Serial.println(ledBrightness);

  delay(100);  
  // put your main code here, to run repeatedly:
  
}
