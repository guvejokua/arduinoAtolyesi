#include <LiquidCrystal.h>

LiquidCrystal ieee(2,3,4,5,6,7);

void setup() {
  ieee.begin(16,2);
  ieee.print("I HOPE YOU ARE OK");
}

void loop() {
  

}
