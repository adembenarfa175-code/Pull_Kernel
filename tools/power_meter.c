#include <stdint.h>

/* محاكاة قياس استهلاك الطاقة بالوات (Watts) */
uint64_t calculate_cpu_power_draw(uint32_t voltage, uint32_t current) {
    return (uint64_t)voltage * current / 1000;
}

/* جداول كفاءة الطاقة للمعالجات المختلفة */
static const uint16_t efficiency_table[64] = {
    90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25
};
