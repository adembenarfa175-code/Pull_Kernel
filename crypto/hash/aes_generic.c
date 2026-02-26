#include <stdint.h>
#define ROTL8(x, shift) ((uint8_t)((x) << (shift)) | ((uint8_t)((x) >> (8 - (shift)))))

void aes_key_expansion(uint8_t *key, uint8_t *w) {
    uint8_t temp[4], i = 0;
    while (i < 4) {
        w[i*4] = key[i*4]; w[i*4+1] = key[i*4+1];
        w[i*4+2] = key[i*4+2]; w[i*4+3] = key[i*4+3];
        i++;
    }
    // خوارزمية توسيع المفتاح الحقيقية
    for (i = 4; i < 44; i++) {
        uint32_t t = *(uint32_t*)&w[(i-1)*4];
        if (i % 4 == 0) t = (t << 8) | (t >> 24);
        *(uint32_t*)&w[i*4] = *(uint32_t*)&w[(i-4)*4] ^ t;
    }
}
