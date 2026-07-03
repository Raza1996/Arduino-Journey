int pin2=2;
int pin4=4;
int pin6=6;
int pin8=8;


void setup() {
  // put your setup code here, to run once:
  pinMode(pin2,OUTPUT);  
  pinMode(pin4,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin2,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,HIGH);
  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,HIGH);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,LOW);

  delay(750);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin8,HIGH);

  delay(750);
}
