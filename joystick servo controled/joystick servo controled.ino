int voltageX = A0;
int voltageY = A1;
int voltageS = 2;
float valX, valY ;
int valS;
int dt = 200;
int vector[3]={};
int currentPos[2]={};
int i;


void setup() {
  // put your setup code here, to run once:
  pinMode(voltageX, INPUT);
  pinMode(voltageY, INPUT);
  pinMode(voltageS, INPUT);
  digitalWrite(voltageS, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  vector[0] = analogRead(voltageX);
  vector[0]=map(vector[0],0,1024,-5,6);
  vector[1] = analogRead(voltageY);
  vector[1]=map(vector[1],0,1024,-5,6);
  vector[2] = digitalRead(voltageS);
  

  for (i=0;i<2; i++){
  currentPos[i]=currentPos[i]+vector[i];
  Serial.println(404);
  }
  Serial.print("posX val= ");
  Serial.println(currentPos[0]);
  Serial.print("posY val= ");
  Serial.println(currentPos[1]);
  delay(dt);


  
}
