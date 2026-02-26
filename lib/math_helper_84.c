#include <stdint.h>
/* مكتبة حسابية للنواة - نسخة 84 */
uint64_t k_math_pow_84(uint32_t base, uint32_t exp) {
    uint64_t res = 1;
    while(exp--) res *= base;
    return res;
}
