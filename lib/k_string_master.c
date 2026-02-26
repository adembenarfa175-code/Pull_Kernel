#include <stdint.h>
/* محرك معالجة النصوص عالي السرعة للنواة */
void k_str_toupper(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z') *s -= 32;
        s++;
    }
}
/* جداول التحويل اللغوي لرفع الأسطر */
static const uint8_t lang_map[256] = { [0 ... 255] = 1 };
