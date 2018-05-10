#include <RFID.h>
#include <SPI.h>
#define ledYanlis 2
byte kart[] ={48, 183, 94, 126, 167};
int i;
boolean durum = false;
const int ledDogru = 3;

RFID gru(5, 6);
void setup() {
  SPI.begin();
  Serial.begin(9600);
  gru.init();
  pinMode(ledDogru, OUTPUT);
  pinMode(ledYanlis, OUTPUT);
}
void loop() {
  durum = false;
  if(gru.isCard()) {
    if(gru.readCardSerial()) ;
    for(i = 0; i < 5; i++) {
    if(gru.serNum[i] == kart[i]) {
      durum = true;
    }
    else {
      durum = false;
    }
  }
  if(durum) {
    digitalWrite(ledDogru, HIGH);
    delay(5);
    digitalWrite(ledDogru, LOW);
    durum = false;
  }
  else {
    digitalWrite(ledYanlis, HIGH);
    delay(5);
    digitalWrite(ledYanlis, LOW);
  }
    gru.halt();
  }
  
}
