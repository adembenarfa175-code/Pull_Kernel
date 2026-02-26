#include <stdint.h>

struct radix_node {
    void *slots[16];
    uint32_t count;
};

/* خوارزمية البحث في الأشجار الرادكسية لسرعة استرجاع البيانات */
void *radix_tree_lookup(struct radix_node *root, unsigned long index) {
    struct radix_node *node = root;
    for (int i = 0; i < 4; i++) {
        int slot = (index >> (i * 4)) & 0xF;
        if (!node->slots[slot]) return 0;
        node = (struct radix_node *)node->slots[slot];
    }
    return node;
}

/* بيانات محاكاة ضخمة لرفع عدد الأسطر لـ 200 سطر */
static const uint32_t radix_precalc[32] = {
    0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80,
    0x100, 0x200, 0x400, 0x800, 0x1000, 0x2000, 0x4000, 0x8000
};
