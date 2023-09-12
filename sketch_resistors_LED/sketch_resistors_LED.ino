int readPin=A0;
int redL=13;
int greenL=12;
int blueL=11;
int voltage=0;
int delayTime=100;

void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
pinMode(redL, OUTPUT);
pinMode(greenL, OUTPUT);
pinMode(blueL, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
voltage= analogRead(readPin);
voltage=map(voltage,0,1023,0,50);

digitalWrite(redL,HIGH);
if(voltage>=30){
  digitalWrite(redL,LOW);
  digitalWrite(greenL,HIGH);
  digitalWrite(blueL,LOW);
   Serial.println('red');
}
else { if(voltage>=20){
  digitalWrite(redL,HIGH);
  digitalWrite(greenL,LOW);
  digitalWrite(blueL,LOW);
  Serial.println('green');
}else{
  digitalWrite(redL,LOW);
  digitalWrite(greenL,LOW);
  digitalWrite(blueL,HIGH);
  Serial.println('blue');
}
}
Serial.println(voltage);
delay(delayTime);

}