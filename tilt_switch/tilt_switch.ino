int oldSwitch;
int tiltPin=2;
int redL=4;
int greenL=7;
void setup() {
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
}

void loop() {
oldSwitch=digitalRead(tiltPin);
if (oldSwitch==1){
  digitalWrite(redL,HIGH);
  digitalWrite(greenL,LOW);
} else {
  digitalWrite(redL,LOW);
  digitalWrite(greenL,HIGH);
}
  

}
