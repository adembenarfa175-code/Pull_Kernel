#include <stdint.h>

uint16_t ip_checksum(void *vdata, size_t length) {
    char *data = vdata;
    uint32_t acc = 0xffff;
    for (size_t i = 0; i + 1 < length; i += 2) {
        uint16_t word;
        word = (uint16_t)data[i] << 8 | (uint16_t)data[i+1];
        acc += word;
        if (acc > 0xffff) acc -= 0xffff;
    }
    return ~acc;
}
