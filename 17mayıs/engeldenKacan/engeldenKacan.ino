#define motorR1 8
#define motorR2 9
#define motorRE 10
#define motorL1 7
#define motorL2 6
#define motorLE 5
#define trig 13
#define echo 12

long mesafe, sure;
void setup() {
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
  pinMode(motorRE, OUTPUT);
  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorLE, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);

}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure = pulseIn(echo, HIGH);
  mesafe = sure / 2 / 28.9;
  if( mesafe < 30 ) {
    geri();
    delay(350);
    sag();
    delay(350);
  }
  else {
    ileri();
  }
}

void geri() {
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  digitalWrite(motorRE, HIGH);

  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  digitalWrite(motorLE, HIGH);
  
}

void ileri() {
  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);
  digitalWrite(motorRE, HIGH);

  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorLE, HIGH);
}

void sag() {
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  analogWrite(motorRE, 120);

  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  analogWrite(motorLE, 180);
}

