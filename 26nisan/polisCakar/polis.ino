int ledSag[] = {6, 7, 8, 9};  //6 ile 9 arasındaki pinler sağ ledler olarak belirleniyor
int ledSol[] = {2, 3, 4, 5};  //2 ile 5 arasındaki pinler sol ledler olarak belirleniyor
int i;    //for döngüleri için sayaç değişkeni
volatile byte durum = HIGH;   //LED'lerin durumlarını tutmak için kullanılan değişken
void setup() {
  for(i = 0; i < 4; i++) {
    //Sağ ve sol ledlerin bağlı olduğu pinler çıkış pini olarak ayarlanıyor
    pinMode(ledSag[i], OUTPUT);
    pinMode(ledSol[i], OUTPUT);
  }
}
void loop() {
  for(i = 0; i < 4; i++) {
    //durum değişkenine göre sağ ve sol taraftaki ledlerin birbirinin zıttı olmasını sağlar. 
    digitalWrite(ledSag[i], durum);
    digitalWrite(ledSol[i], !durum);
  }
  delay(40);
  durum = !durum;   //durum'u tam tersine çevir.
}
