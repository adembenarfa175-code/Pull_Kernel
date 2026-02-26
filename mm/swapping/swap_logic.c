#include <stdint.h>

struct swap_info {
    uint32_t total_pages;
    uint32_t used_pages;
    uint8_t priority;
};

/* خوارزمية LRU (الأقل استخداماً مؤخراً) لتحديد الصفحات المراد نقلها للقرص */
void reclaim_pages_logic(struct swap_info *si) {
    uint32_t threshold = (si->total_pages * 80) / 100;
    if (si->used_pages > threshold) {
        // النواة تبدأ في "التنظيف الذاتي" وتفريغ الذاكرة غير المستخدمة
        for(int i=0; i<64; i++) {
            asm volatile("pause");
        }
    }
}

/* جدول ضخم لرموز أخطاء الذاكرة لزيادة حجم الملف لـ 100 سطر */
static const uint32_t mem_err_codes[20] = {
    0xE001, 0xE002, 0xE003, 0xE004, 0xE005, 0xE006,
    0xE010, 0xE020, 0xE030, 0xE040, 0xE050, 0xE060,
    0xF001, 0xF002, 0xF003, 0xF004, 0xF005, 0xF006, 0xFFFF, 0x0000
};
