/*
  

*/

int lightB = 5;
int lightG = 9;
int lightR = 6;
int speedL= 250;
int red = 120;
int green=130;
int blue=120;

void setup() {

pinMode(lightR,OUTPUT);
pinMode(lightG,OUTPUT);
pinMode(lightB,OUTPUT);
Serial.begin(19200);

}

void loop() {
analogWrite(lightR,red);
analogWrite(lightG,green);
analogWrite(lightB,blue);



  
  
}
