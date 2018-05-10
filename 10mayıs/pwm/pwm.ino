/*IEEE Giresun SB Arduino Atölyesi 10.05.2018
 * PWM yöntemi kullanılarak LED'in parlaklığını ayarlama
 * 
 */
const int led = 9;      //led pini tutmak için kullanılacak sabit
int potDeger;           //pot değerini tutmak için kullanılan fonksiyon
void setup() {
  pinMode(led, OUTPUT);   //led pini çıkış olarak ayarlanıyor
}

void loop() {
  potDeger = analogRead(A0);      //A0 pininden pot değerleri okunuyor
  potDeger = map(potDeger, 0, 1023, 0, 255);    //pot değerler 0,255 arasına ölçekleniyor
  /*
   * Bazı digital pinler için kullanılabilen(PWM pinler için) analogWrite fonksiyonu
   * parametre olarak aldığı değere göre gönderilecek sinyalin darbe genişliklerini 
   * ayarlayarak digital pinden analog'a benzer çıkış almayı sağlar
   * void analogWrite(PWM_pin_value, withValue);
   */
  analogWrite(led, potDeger);
  delay(20);
}
