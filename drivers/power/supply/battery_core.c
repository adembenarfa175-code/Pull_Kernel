#include <stdint.h>

int voltage_to_capacity(int mv) {
    if (mv >= 4200) return 100;
    if (mv <= 3500) return 0;
    return (mv - 3500) / 7; // محاكاة خطية للسعة
}
