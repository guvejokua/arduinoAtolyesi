int led = 8;   //Ledin pini tanımlanıyor.
int buton = 2;  //Buton pini tanımlanıyor
void setup() {
  noInterrupts();   //Kesmeler pasif
  pinMode(led, OUTPUT);   //Led pini çıkış
  pinMode(buton, INPUT);    //Buton pini giriş
  interrupts();   //Kesmeler aktif
  attachInterrupt(digitalPinToInterrupt(2), ledSondur, LOW);    /*0.Kesme pinine bağlı(2.dijital pin) butondan 
  0(LOW) verisi gelirse ledSondur fonksiyonu ile kesmeye gidilir */
}

void loop() {
  //Klasik LED blink komutları
  digitalWrite(led, HIGH);
  delay(2500);
  digitalWrite(led, LOW);
  delay(2500);
}

void ledSondur(void) {
  //Kesme fonksiyonu. Butona basılınca led söner
  digitalWrite(led, LOW);
  delay(20);
}

