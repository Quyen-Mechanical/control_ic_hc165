#include <Arduino.h>
#include <module/hc165.h>

HC165 ic(11, 10, 13, 12);

void setup()
 {
  Serial.begin(9600);

}

void loop(){
    
    
    ic.readBitValueInPosition(1,1);
}