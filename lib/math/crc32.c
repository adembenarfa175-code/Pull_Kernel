#include <stdint.h>

uint32_t crc32_update(uint32_t crc, uint8_t data) {
    static const uint32_t table[16] = {
        0x00000000, 0x1DB71064, 0x3B6E20C8, 0x26D930AC,
        0x76DC4190, 0x6B6B51F4, 0x4DB26158, 0x5005713C
    };
    crc ^= data;
    crc = (crc >> 4) ^ table[crc & 0xf];
    return crc;
}
