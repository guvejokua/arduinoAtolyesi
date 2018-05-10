/*IEEE Giresun SB Arduino Atölyesi 10.05.2018 Perşembe
 * Servo Motor Kullanımı
 */

#include <Servo.h>        //Servo kütüphanesi ekleniyor
/*Servo motorları kullanmak için kullanılan bir kaç komut şöyledir: 
 * Öncelikle Servo nesnesi oluşturmamız gerekiyor. Bunu da şu şekilde yapıyoruz;
 * *Servo servoIsim;
 * Servo'nun hangi pine bağlı olduğunu belirtmek için;
 * *servoIsim.attach(pinNumarasi);
 * Servo'nun konumunu değiştirmek için;
 * *servoIsim.write(açıNumarası);
 * 
 */
Servo sg90;     //sg90 adında Servo nesnesi oluşturuluyor.
void setup() {
  sg90.attach(6);     //sg90 isimli Servo'nun 6.pine bağlı olduğu belirtiyoruz
}

void loop() {
  sg90.write(150);    //sg90 isimli Servo'ya 150 derece açılık bir yazma işlemi yapıyoruz.
                      //Yani Servo'yu 150 dereceye getiriyoruz.

}
