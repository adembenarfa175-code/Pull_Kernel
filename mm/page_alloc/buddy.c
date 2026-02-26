#include <stdint.h>

static inline int get_order(unsigned long size) {
    int order = 0;
    size = (size - 1) >> 12; // 4KB Page size
    while (size) {
        size >>= 1;
        order++;
    }
    return order;
}

uint64_t calculate_buddy_pfn(uint64_t pfn, int order) {
    return pfn ^ (1UL << order);
}
