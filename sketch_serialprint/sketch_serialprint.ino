int j=1;
int waitT=750;
int x=3;
int y=7;
int z;
String myString=" + ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
z=x+y;
Serial.print(x);
Serial.print(myString);
Serial.print(y);
Serial.print(" = ");
Serial.println(z);
delay(waitT);
}
