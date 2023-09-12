#include <Servo.h>
//SERVO pin vars
int servoPin = 9;
int servoPos = 171;
Servo myServo;
//Light resistor vars
int dt =50;
int lightVal;
int lightPin = A4;

//Joystick vars
int voltageX = A0;
int voltageY = A1;
int voltageS = 2;
float valX, valY;
int valS;

//array vars
int vector[3]={};
int currentPos[2]={};
int i;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(lightPin, INPUT);
  pinMode(voltageX, INPUT);
  pinMode(voltageY, INPUT);
  pinMode(voltageS, INPUT);
  digitalWrite(voltageS, HIGH);
}

void loop() {
  vector[0] = analogRead(voltageX);
  vector[0]=map(vector[0],0,1024,-5,6);
  vector[2] = digitalRead(voltageS);

  

  currentPos[0]=currentPos[0]+vector[0];
  if (currentPos[0]>180){currentPos[0]=180;}
  else{if(currentPos[0]<0){currentPos[0]=0;}}

  
  Serial.print("posX val= ");
  Serial.println(vector[0]);

  

  servoPos = currentPos[0];
  if ((servoPos >= 180) || (servoPos <= 0)) {
    if (servoPos >= 175) {
      servoPos = 175;
    } else {
      servoPos = 2;
    }
  }

  myServo.write(servoPos);
  Serial.println(servoPos);
  delay(dt);
}
