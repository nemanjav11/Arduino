int latchPin= 11;
int clockPin= 9;
int dataPin= 12;
byte LEDs;
int dt=1000;
int numbersList[10]={0b00110000,0b01101101, 0b01101101,0b01111001,0b00110011,0b01011011,0b00011111,0b01110000,0b01111111,0b01110011};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
for (int i=0; i<10; i++){
  LEDs= numbersList[i];
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin, LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}

  // put your main code here, to run repeatedly:

}
