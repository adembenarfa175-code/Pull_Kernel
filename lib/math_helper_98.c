#include <stdint.h>
/* مكتبة حسابية للنواة - نسخة 98 */
uint64_t k_math_pow_98(uint32_t base, uint32_t exp) {
    uint64_t res = 1;
    while(exp--) res *= base;
    return res;
}
