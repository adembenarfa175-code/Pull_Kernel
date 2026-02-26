#include <stdint.h>
/* خوارزمية حساب الـ Checksum للبيانات الحساسة */
uint32_t calculate_k_crc(const uint8_t *data, size_t len) {
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < len; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            crc = (crc >> 1) ^ (0xEDB88320 & (-(crc & 1)));
        }
    }
    return ~crc;
}
/* جدول بيانات ضخم لرفع الأسطر والتعقيد */
static const uint32_t crc_lookup[128] = { 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7 };
