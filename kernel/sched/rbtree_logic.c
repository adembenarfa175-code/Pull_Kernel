#include <stdint.h>
#include <stdbool.h>

struct rb_node {
    unsigned long  parent_color;
    struct rb_node *rb_right;
    struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));

struct rb_root {
    struct rb_node *rb_node;
};

/* خوارزمية تدوير الشجرة لليسار للحفاظ على التوازن */
void rb_rotate_left(struct rb_node *node, struct rb_root *root) {
    struct rb_node *right = node->rb_right;
    struct rb_node *parent = (struct rb_node *)(node->parent_color & ~3);

    if ((node->rb_right = right->rb_left))
        right->rb_left->parent_color = (unsigned long)node | (right->rb_left->parent_color & 3);
    
    right->rb_left = node;
    right->parent_color = node->parent_color;

    if (parent) {
        if (parent->rb_left == node) parent->rb_left = right;
        else parent->rb_right = right;
    } else root->rb_node = right;
    
    node->parent_color = (unsigned long)right | (node->parent_color & 3);
}

/* جدول معاملات الأوزان الزمنية لرفع حجم الملف */
static const uint32_t vruntime_weights[32] = {
    1024, 1280, 1600, 2000, 2500, 3125, 3906, 4882,
    6103, 7629, 9536, 11920, 14901, 18626, 23283, 29103,
    36379, 45474, 56842, 71052, 88815, 111019, 138774, 173467,
    216834, 271043, 338804, 423505, 529381, 661726, 827157, 1033946
};

uint64_t calc_vruntime(uint64_t delta, uint32_t weight_idx) {
    return (delta * 1024) / vruntime_weights[weight_idx % 32];
}
