void setup() {
  //Kurulum Kısmı. Bu kısım Arduino çalışmaya başladığında sadece bir kere yürütülür.
  pinMode(13, OUTPUT);  //13.Pin çıkış pini olarak tanımlanıyor.
}

void loop() {
  //Döngü kısmı. Arduino'da asıl işi yapan kısımdır. Sonsuz bir şekilde kendini tekrar eder.
  digitalWrite(13, HIGH);   //13.pine lojik 1 seviyesi veya 5V gönderiliyor. Yani pine bağlı led yakılıyor 
  delay(1000);    //Program 1000miliSaniye bekletiliyor.
  digitalWrite(13, LOW);    //13.Pin lojik 0 seviyesine çekiliyor. Yani pine bağlı led södürülüyor.
  delay(1000);    Program 1sn bekletiliyor.
}
