int readPin=A3;
int readVal;
float v2=0;
int delayTime=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  v2=(5.0/1023.0)*readVal;
  Serial.println(v2);
  delay(delayTime);
}
