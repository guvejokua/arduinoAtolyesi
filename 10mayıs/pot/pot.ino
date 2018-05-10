/*IEEE Giresun SB 10.05.2018 Perşembe
 * Potansiyometre değerini okuyup Seri Porta yazdırma
 * Ayrıca map fonksiyonu ile 0,1023 arasındaki analog sinyal verileri 0,255 arasına ölçekleniyor
 */
int potDeger;           //Pot değerini tutmak için kullanılacak değişken
int yeniDeger;          //0,255 arasına ölçeklenecek pot verilerini tutacak değişken
void setup() {
  Serial.begin(9600);     //Seri haberleşme başlatılıyor
}
void loop() {
  potDeger = analogRead(A0);        //potun bağlı olduğu analog pin okunarak potDeger'e atanıyor
  Serial.print("Pot degeri = ");    //Okunan değer Seri Porta yazdırılıyor*
  Serial.println(potDeger);         //*
  /*
   * pottan okunan değer 0,1023 arasında idi. Bu değeri 0,255 arasına ölçeklemek için map 
   * fonksiyonunu kullandık. map fonksiyonu ;
   * yeniDeger = map(eskiDeger, eDMin, eDMax, yDMin, yDMax);
   * *eD : eskiDeger
   * *yd : yeniDeger
   */
  yeniDeger = map(potDeger, 0, 1023, 0, 255);
  Serial.print("Yeni deger = ");  //Ölçeklenen değer Seri Porta yazılıyor
  Serial.println(yeniDeger);
  delay(500);
}
