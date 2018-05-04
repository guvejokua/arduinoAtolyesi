//IEEE Giresun SB Arduino Atölyesi
int trigger = 13;     //13.pin ismi için trigger etiketi atanıyor
int echo = 12;        //12.pin için echo etiketi atanıyor
float mesafe, zaman;    //mesafe ve zamanı tutmak için kullanılacak değişkenler
void setup() {  
  Serial.begin(9600);   //Seri haberleşme başlatılıyor
  pinMode(trigger, OUTPUT);     //trigger çıkış
  pinMode(echo, INPUT);         //echo pini giriş
}

void loop() {
  digitalWrite(trigger, HIGH);    //trigger tetikleniyor
  delayMicroseconds(10);          //10 us bekleniyor
  digitalWrite(trigger, LOW);     //trigger tetiği geri çekiliyor
  zaman = pulseIn(echo, HIGH);    //pulseIn ile echo HIGH olana kadar geçen süre zaman'a atanıyor
  zaman = zaman /2;
  mesafe = zaman / 28.9;
  //Ölçülen mesafe ekrana yazdırılıyor
  Serial.print("Mesafe = ");
  Serial.println(mesafe);
  Serial.println("----------");
  delay(100);
}
