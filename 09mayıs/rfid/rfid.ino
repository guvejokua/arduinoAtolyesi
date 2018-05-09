/*IEEE Giresun SB Arduino Atölyesi 09.05.2018 Çarşamba
 * 
 * RFID Kartlar için gerekli pin bağlantıları:
 * Pin  : Arduino Üzerinde Bağlanacağı Dijital Pin Numarası   : Açıklama
 * -----  --  -----------------------------------------------------------------------------------------------------------------------------
 * SDA  : 8   (Slave Selection Pin: Slave'ların seçilmesi için kullanılır)
 * SCK  : 13  (Serial Clock pinidir. Arduino'nun saat sinyali çıkışına bağlanır)
 * MISO : 12  (Master In Slave Out: Slave'dan gelen verilerin Master cihaza aktatırıldığı hattır. Arduino üzerindeki MISO pinine bağlanır)
 * MOSI : 11  (Master Out Slave In: Master'ın Slave'a veri aktarmak için kullandığı hattır. Arduino üzerindeki MOSI pinine bağlanır)
 * GND  : GND
 * RST  : 9   (Reset Pini)
 * 3.3V : 3.3V (Vss Kart Beslemesi)
 */

#include <RFID.h>   //RFID Kütüphanesi ekleniyor
#include <SPI.h>    //RFID Okuyucu kartlar SPI haberleşme yaptığı için SPI.h kütüphanesi ekleniyor
RFID rfid(8,9);     //RFID nesnesi oluşturuluyor RFID objectName(Slave Select(SS) Pin, RESET pin);

void setup() {
  SPI.begin();                                                //SPI haberleşme başlatılıyor
  Serial.begin(9600);                                         //Seri haberleşme başlatılıyor
  rfid.init();                                                //rfid nesnesi başlatılıyor.
}

void loop() {
  if(rfid.isCard()) {                                         //Eğer kart okuyucu bir kart görürse bu blok çalışır.
    if(rfid.readCardSerial()) {                               //Kart gördükten sonra kartı okuma işlemini tamamlarsa bu readCardSerial() fonksiyonu true yollar
      //Okunan kart rfid nesnesinin içindeki serNum dizisine yazılır. Bu diziyi seri porta yazdırarak kart içindenki kodu görebiliriz.
      Serial.print(rfid.serNum[0]);                 
      Serial.print(rfid.serNum[1]);
      Serial.print(rfid.serNum[2]);
      Serial.print(rfid.serNum[3]);
      Serial.println(rfid.serNum[4]);
    }
    rfid.halt();                                              //rfid nesnesi sonlandırılıyor.
  }

}
