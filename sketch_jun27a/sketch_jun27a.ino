int pot;
float readVal;
int led;


void setup() {
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(A0);
  readVal = (5.0/1023.0)*pot;
  if (readVal >= 0 && readVal <=1.7) {
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
  } 

  if (readVal >= 1.71 && readVal <=3.2) {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
  } 

    if (readVal >= 3.21 && readVal <=5) {
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
  } 

  Serial.println(readVal);
  led = map(pot, 0, 1023, 0, 255);
  analogWrite(6, led);
}
