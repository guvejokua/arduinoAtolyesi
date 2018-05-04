//IEEE Giresun SB Arduin Atölyesi
#include <LiquidCrystal.h> //LiquidCrystal kütüphanesi ekleniyor.
/*2x16 LCD Ekranların Arduino ile kullanılması
 * 
 * Yapılan bağlantılar:
 * Vss -> GND
 * Vdd -> +5V
 * Vo  -> Kontras pini 10K'lık potansiyometrenin orta ucuna bağlanır.
 * Rs  -> 2 :Register Select pini 2.dijital pine bağladık
 * Rw  -> GND :LCD ekrana sadece yazı yazdıracağımız için GND hattına bağladık
 * E   -> 3 :Enable pini 3.dijital pine bağladık
 * *D0-D7 arasındaki pinler data pinleridir. Hepsi de bağlanabilir veya 4 bitlik iletişim için
 4 pinde bağlanabilir. Biz 4 bitlik iletişim yapacağız. 8 bit için LiquidCrystal nesnesi
 oluşturmak için 8 data pini de belirtilmesi gerekir. Ancak 4 bit için;
 * D4   -> 4
 * D5   -> 5
 * D6   -> 6
 * D7   -> 7
 * A    -> 3.3V :Arka aydınlatma için kullanılan LED'lerin Anod ucudur
 * K    -> GND  :Arka aydınlatma için kullanılan LED'lerin Kathode ucudur.
 * Bu bağlantılar yapıldıktan sonra LCD nesnesi oluşturacağız. Bunun 4 farklı durumu vardır:
 / ///////////////////////////////////////////////////////////////////////////////////////////
 // LiquidCrystal lcdNesneAdi(rs, e, d4, d5, d6, d7);                                      //
 // LiquidCrystal lcdNesneAdi(rs, rw, e, d4, d5, d6, d7);                                 //
 // LiquidCrystal lcdNesneAdi(rs, e, d0, d1, d2, d3, d4, d5, d6, d7);                    //
 // LiquidCrystal lcdNesneAdi(rs, rw, e, d0, d1, d2, d3, d4, d5, d6, d7);               //
 ////////////////////////////////////////////////////////////////////////////////////////
 * Biz Rw pinimizi toprağa bağladığımız ve 4 bitlik iletişim kullanacağımız için;
 * LiquidCrystal lcdNesneAdi(rs, e, d4, d5, d6, d7);
 * yapısını kullanacağız. lcdNesneAdi'miz lcd olsun bu ismi bütün fonksiyonlarda kullanacağız
*/
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);    //lcd isimli LiquidCrystal nesnesi oluşturuluyor

/* Bazı LCD fonksiyonları: (her noktadan önce işlem yapmak istenilen LCD ekranın nesne adı yazılır)
 * .begin(sutun, satır) LCD ekranı başlatır. Örn.: lcd.begin(2,16);
 * .print(data) LCD ekrana yazı yazar.  Örn.: lcd.print("Merhaba");
 * .clear() LCD ekranı temizler. Örn.: lcd.clear();
 */
void setup() {
  lcd.begin(2, 16);
  lcd.print("Merhaba Dunya");
}

void loop() {
  lcd.clear();
  lcd.print("IEEE Giresun");
  delay(250);
}
