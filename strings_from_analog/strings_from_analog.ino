int redL=11;
int greenL=10;
int blueL=9;
String myColor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(redL,OUTPUT);
pinMode(greenL,OUTPUT);
pinMode(blueL,OUTPUT);
}

void loop() {

  // put your main code here, to run repeatedly:
Serial.println("What color do you want?: ");
while(Serial.available()==0){
}
myColor=Serial.readString();

if(myColor=="yellow"){
     analogWrite(redL, 255);
    analogWrite(greenL,100);
    analogWrite(blueL,0);
 
  }
  else{ 
  if(myColor=="orange"){
    analogWrite(redL,240 );
    analogWrite(greenL,137);
    analogWrite(blueL,0);
  } 
  else{ 
    if (myColor=="cyan"){
      analogWrite(redL,0);
      analogWrite(greenL,250);
      analogWrite(blueL,250);
  }
  }
  }
  

}



