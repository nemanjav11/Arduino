int microphonePin = A0;
int lightB = 5;
int lightG = 9;
int lightR = 6;
int speedL= 250;
int red = 120;
int green=130;
int blue=120;






void setup() {
  Serial.begin(19200);
  pinMode(lightR,OUTPUT);
  pinMode(lightG,OUTPUT);
  pinMode(lightB,OUTPUT);
}

void loop() {
  int mn = 1024;
  int mx = 0;

  for (int i = 0; i < 100; ++i) {

    int val = analogRead(microphonePin);
    
    mn = min(mn, val);
    mx = max(mx, val);
  }

  int delta = mx - mn;
  int brightness = map(delta,0,1023,0,255);
  analogWrite(lightR,brightness);
  analogWrite(lightG,1/(1/brightness));
  analogWrite(lightB,brightness);
int boolean;

if(delta>900){
  if(boolean==255){
    analogWrite(lightR,0);
    boolean=boolean -255;

  }
  else {
    analogWrite(lightR,255);
    boolean=boolean + 255;
  }
}
  Serial.print("Min=");
  Serial.print(mn);
  Serial.print(" Max=");
  Serial.print(mx);
  Serial.print(" Delta=");
  Serial.println(delta);
}