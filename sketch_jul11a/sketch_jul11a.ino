int numBlinks;
int j;
int redPin= 12;
int bt=500;
String msg = "Your number is ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  }


// A program that makes an LED blinks the number input

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while (Serial.available()==0){
  }
numBlinks=Serial.parseInt();

for (j=1;j<=numBlinks;j=j+1) {
  digitalWrite(redPin,HIGH);
  delay(bt);
  digitalWrite(redPin,LOW);
  delay(bt);
}

}