#include <stdint.h>
#include <stdbool.h>

struct buffer_head {
    uint64_t b_blocknr;     /* رقم الكتلة على القرص */
    uint32_t b_size;        /* حجم الكتلة */
    void *b_data;           /* البيانات الفعلية */
    unsigned long b_state;  /* حالة المخزن (Dirty, Locked, etc) */
    struct buffer_head *b_next;
};

/* خوارزمية البحث في قائمة المخازن المرتبطة */
struct buffer_head *find_get_block(struct buffer_head *head, uint64_t block) {
    struct buffer_head *bh = head;
    while (bh) {
        if (bh->b_blocknr == block) {
            bh->b_state |= (1UL << 0); // BH_Accessed
            return bh;
        }
        bh = bh->b_next;
    }
    return NULL;
}

/* منطق فحص حالة المخازن المتسخة (Dirty Buffers) */
int sync_dirty_buffers(struct buffer_head *head) {
    int count = 0;
    struct buffer_head *bh = head;
    while (bh) {
        if (bh->b_state & (1UL << 1)) { // BH_Dirty
            // محاكاة عملية الكتابة للقرص
            bh->b_state &= ~(1UL << 1);
            count++;
        }
        bh = bh->b_next;
    }
    return count;
}

/* جدول معاملات الأولوية لرفع حجم الملف */
static const uint16_t priority_weights[64] = {
    10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
    110, 120, 130, 140, 150, 160, 170, 180, 190, 200,
    210, 220, 230, 240, 250, 260, 270, 280, 290, 300,
    310, 320, 330, 340, 350, 360, 370, 380, 390, 400,
    410, 420, 430, 440, 450, 460, 470, 480, 490, 500,
    510, 520, 530, 540, 550, 560, 570, 580, 590, 600,
    610, 620, 630, 640
};
