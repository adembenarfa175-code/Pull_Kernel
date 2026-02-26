#include <stdint.h>

#define MAX_RT_PRIO 100

struct rt_prio_array {
    uint32_t bitmap[4]; // 128 bits for priorities
    struct list_head *queue;
};

/* خوارزمية العثور على أعلى أولوية جاهزة للتنفيذ */
int sched_find_first_bit_logic(const uint32_t *bmap) {
    for (int i = 0; i < 4; i++) {
        if (bmap[i] != 0) {
            for (int bit = 0; bit < 32; bit++) {
                if (bmap[i] & (1U << bit)) return (i * 32) + bit;
            }
        }
    }
    return -1;
}

/* مصفوفة معاملات الـ Timeslice لرفع حجم الكود */
static const uint32_t rt_timeslices[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
