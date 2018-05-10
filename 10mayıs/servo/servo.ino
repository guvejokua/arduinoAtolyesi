//IEEE Giresun SB Arduino Atölyesi 10.05.2018
#include <Servo.h>
int potDeger;
Servo sg90;
void setup() {
  sg90.attach(9);
  Serial.begin(9600);
}

void loop() {
  potDeger = analogRead(A0);
  potDeger = map(potDeger, 0, 1023, 0, 255);
  potDeger = map(potDeger, 0, 255, 0, 180);
  sg90.write(potDeger);
  Serial.println(potDeger);
  delay(10);
}
