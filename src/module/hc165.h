#include <Arduino.h>
class HC165
{
private:
    /* data */
public:
    bool readBitValueInPosition(uint8_t Register, uint8_t position);
    bool READ_ORDER_TYPE = LSBFIRST;
    uint8_t REGISTER_165_NOW;
    uint8_t REGISTER_165_NOW2;
    // Define Connections to 74HC165

    // PL pin 1
    int load;
    // CE pin 15
    int clock_pinEnablePin;
    // Q7 pin 7
    int dataIn;
    // CP pin 2
    int clock_pin;
    HC165(uint8_t chan_chot, uint8_t chan_xung_thoi_gian_kich_hoat, uint8_t chan_xung_thoi_gian, uint8_t chan_tin_hieu);
    ~HC165();

};
