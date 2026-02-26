#include <stdint.h>
/* مكتبة حسابية للنواة - نسخة 88 */
uint64_t k_math_pow_88(uint32_t base, uint32_t exp) {
    uint64_t res = 1;
    while(exp--) res *= base;
    return res;
}
