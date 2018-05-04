//IEEE Giresun SB Arduino Atölyesi
#include <LiquidCrystal.h>    //LiquidCrystal kütüphanesi ekleniyor
int trig = 13;    //HC-SR04 trigger pinini 13'e bağlayacağımız için 13'e trig adını verdik
int echo = 12;    //echo pini de 12'ye bağlancak;
float zaman, mesafe;    //zaman ve mesafeyi tutmak için kullanılacak değişklenler
LiquidCrystal lcd(3, 2, 4, 5, 6, 7);    //lcd adında LiquidCrystal nesnesi oluşturuluyor
void setup() {
  pinMode(trig, OUTPUT);    //trig pini çıkış    
  pinMode(echo, INPUT);     //echo pini giriş
  lcd.begin(2,16);          //lcd başlatılıyor
}

void loop() {
 lcd.clear();   //lcd temizleniyor.
 digitalWrite(trig, HIGH);    //trig'a tetikleme gönderiliyor
 delayMicroseconds(10);       //10 us bekleniyor
 digitalWrite(trig, LOW);     //trig'dan tetik çekiliyor
 zaman = pulseIn(echo, HIGH);   //pulseIn ile echonun high olmasına kadar geçen zaman tutuluyor
 zaman = zaman / 2;       //zaman ikiye bölünüyor
 mesafe = mesafe / 28.9;    //mesafemiz zaman / 28.9 olacak. (x = vt'den)
 lcd.print("Mesafe = ");     //lcd ekrana "mesafe = " yazıdırılıyor 
 lcd.print(mesafe);         //ölçülen mesafe lcd ekrana yazdırılıyor
 delay(250);          //250 ms bekleniyor
}
