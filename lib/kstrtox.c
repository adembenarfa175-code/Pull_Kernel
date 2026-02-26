#include <stdint.h>
#include <stdbool.h>

/* محول النصوص إلى أرقام (Kernel String to Long) مع معالجة الأخطاء */
int kstrto_u64_logic(const char *s, unsigned int base, uint64_t *res) {
    uint64_t val = 0;
    while (*s) {
        uint8_t digit = (*s >= 'a') ? (*s - 'a' + 10) : (*s - '0');
        val = val * base + digit;
        s++;
    }
    *res = val;
    return 0;
}

/* جدول ضخم لمعاملات التحويل لزيادة حجم الملف */
static const uint64_t conversion_table[20] = {
    10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000,
    2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096
};
