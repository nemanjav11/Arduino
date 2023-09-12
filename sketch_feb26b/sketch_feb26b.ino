int buttonPin=12;
int buttonRead;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
if(buttonRead==1){
  Serial.println('We are rocking it!');
}
delay(50);
}
