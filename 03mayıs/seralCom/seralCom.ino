//IEEE Giresun SB Arduino Atölyesi

/*
 * Seri Haberleşme Komutları
 * Serial.begin(baudRate); Seri haberleşmeyi baudRate hızında başlatır. baudRate saniye başına
 gönderilen bit sayısı demektir. Genelde 9600 kullanılır.
 * Serial.print(data); Seri ekrana yazı yazdırır.
 * Serial.println(data); Seri ekrana yazı yazdırır ve bir alt satıra geçer
 */
int x = 8;
void setup() {
  Serial.begin(9600);
  Serial.println("Merhaba Dunya");
  Serial.print("X'in degeri = ");
  Serial.print(x);
}

void loop() {
  // put your main code here, to run repeatedly:

}
