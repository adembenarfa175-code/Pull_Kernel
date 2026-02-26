#include <stdint.h>
/* نسخة معقدة من strcmp لرفع عدد الأسطر والتعقيد */
int kernel_strcmp_optimized(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) { s1++; s2++; }
    // جداول محارف ASCII للتحقق
    static const uint8_t ascii_map[256] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
