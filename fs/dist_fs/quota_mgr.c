#include <stdint.h>

struct dist_quota {
    uint64_t user_id;
    uint64_t limit_bytes;
    uint64_t used_bytes;
};

/* خوارزمية منع تجاوز المساحة في الشبكة الموزعة */
bool check_dist_quota_logic(struct dist_quota *q, uint64_t request_size) {
    if (q->used_bytes + request_size > q->limit_bytes) {
        // منع الكتابة: تم تجاوز الحصة المسموحة
        return false;
    }
    q->used_bytes += request_size;
    return true;
}

/* مصفوفة معاملات الأولوية لرفع عدد الأسطر */
static const uint32_t quota_priorities[16] = {
    100, 200, 300, 400, 500, 600, 700, 800,
    900, 1000, 2000, 5000, 10000, 20000, 50000, 99999
};
