//IEEE Giresun SB Arduino Atölyesi

//13-7.pinlere isim atanıyor

int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int i = 13;     //for döngüsü için sayaç değişkeni
void setup() {
  for(i = 13; i >= 7; i--) {
    //13-7.pinler çıkış pini olarak ayarlanıyor
    pinMode(i, OUTPUT);
  }
}

void loop() {
  //yaz fonksiyonumuza 2 göndererek displayde 2 görünmesini sağlıyoruz
  yaz(2);
}

//dijital pinlere, gönderilen sayıya göre çıkış verdiren fonksiyon 
void yaz(int x) {
  switch(x) {
    //sayıları ayırmak için switch-case yapısı kullanılıyor. if-else de kullanılabilirdi.
    case 0: {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      break;
    }
    case 1: {
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      break;
    }
    case 2: {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      break;
    }
    case 3: {
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      break;
    }
    default :{
      break;
    }
  }
}
