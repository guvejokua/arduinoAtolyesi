//IEEE Giresun SB Arduino Atölyesi

//7447'nin 4 bitlik girişi için kullanılacak pinlere isim veriliyor.
int a = 13;
int b = 12;
int c = 11;
int d = 10;
int i;    //sayaç değişkeni
void setup() {
  for(i = 13; i >= 10; i--) {
    //13-10.pinler çıkış olarak ayarlanıyor
    pinMode(i, OUTPUT);
  }
}

void loop() {
  //yaz fonksiyonuna 0 gönderiliyor
  yaz(0);

}
void yaz(int x) {
  //x sayısına göre digital portlara çıkış vererek 7447'nin giriş pinleri için BCD kod üreten fonksiyon
  switch(x) {
    case 0: {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      break;
    }
    case 1: {
      
      break;
    }
  }
}




