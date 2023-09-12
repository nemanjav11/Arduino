int myReadPin=A2;
int readVal;
int redL=13;
int greenL=12;
int blueL=11;
float voltage;
int waitT=250;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myReadPin,INPUT);
pinMode(redL, OUTPUT);
pinMode(greenL, OUTPUT);
pinMode(blueL, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal= analogRead(myReadPin);
voltage=readVal*0.00488;
if(voltage>=2){
  digitalWrite(redL,LOW);
  digitalWrite(greenL,HIGH);
  digitalWrite(blueL,LOW);
}
else { if(voltage>=1 && voltage<=2){
  digitalWrite(redL,HIGH);
  digitalWrite(greenL,LOW);
  digitalWrite(blueL,LOW);
}else{ if(voltage<=1/9){
  digitalWrite(redL,LOW);
  digitalWrite(greenL,LOW);
  digitalWrite(blueL,HIGH);
}}
}
Serial.println(voltage);
delay(waitT);
}
