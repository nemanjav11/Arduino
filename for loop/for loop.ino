int j;
int delayT=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=2;j<=10;j+=2){
  Serial.println(j);
  delay(delayT);
}
}
