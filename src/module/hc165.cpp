#include <module/hc165.h>
HC165::HC165(uint8_t chan_chot, uint8_t chan_xung_thoi_gian_kich_hoat, uint8_t chan_xung_thoi_gian, uint8_t chan_tin_hieu)
{
    load = chan_chot;
    clock_pinEnablePin = chan_xung_thoi_gian_kich_hoat;
    clock_pin = chan_xung_thoi_gian;
    dataIn = chan_tin_hieu;

    pinMode(load, 1);
    pinMode(clock_pinEnablePin, 1);
    pinMode(clock_pin, 1);
    pinMode(dataIn, 0);

}
bool HC165::readBitValueInPosition(uint8_t Register, uint8_t position)
{
    digitalWrite(load, 0);
    delayMicroseconds(5);
    digitalWrite(load, 1);
    delayMicroseconds(5);

    digitalWrite(clock_pin, 1);
    digitalWrite(clock_pinEnablePin, 0);
    REGISTER_165_NOW = shiftIn(dataIn, clock_pin, LSBFIRST);
    REGISTER_165_NOW2 = shiftIn(dataIn, clock_pin, MSBFIRST);
    digitalWrite(clock_pinEnablePin, 1);
    Serial.print("TIN HIEU THANH 1 LA : ");
    Serial.println(REGISTER_165_NOW, BIN);
    Serial.print("TIN HIEU THANH 2 LA : ");
    Serial.println(REGISTER_165_NOW2, BIN);
    delay(300);
}
HC165::~HC165() {}