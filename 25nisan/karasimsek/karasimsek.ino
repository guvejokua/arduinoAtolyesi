int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};  //Ledlerin bağlı olduğu pinler leds dizisine tanımlanıyor
int i;    //for döngülerinde sayaç olarak kullanmak için
void setup() {
  for(i = 0; i < 8; i++) {
    //Bütün led pinleri (2 ile 9 arası) çıkış pini yapılıyor.
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for(i = 0; i < 8; i++) {
    //her led 10'ar milisaniye aralıklarla yanıp sönüyor ve her yanıp söndükten sonra bu işlem bir sağdaki lede kayıyor.
    digitalWrite(leds[i], HIGH);
    delay(10);
    digitalWrite(leds[i], LOW);
    delay(10);
  }
  for(i = 7; i >= 0; i--) {
    //Yukarıdaki for döngüsü ile aynı görevde. Sadece bu sefer hareket soldan sağa doğru 
    digitalWrite(leds[i], HIGH);
    delay(10);
    digitalWrite(leds[i], LOW);
    delay(10);
  }
}
