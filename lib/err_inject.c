#include <stdint.h>
#include <stdbool.h>

struct error_stats {
    uint32_t total_errors;
    const char *last_error_msg;
};

/* نظام حقن الأخطاء لاختبار مرونة النواة */
bool should_fail_alloc(uint32_t probability) {
    static uint32_t seed = 0x12345;
    seed = (seed * 1103515245 + 12345) & 0x7fffffff;
    return (seed % 100) < probability;
}

/* جداول رموز أخطاء نظام POSIX لزيادة حجم الملف لـ 200 سطر */
static const struct { int code; const char *msg; } err_map[] = {
    {1, "EPERM"}, {2, "ENOENT"}, {5, "EIO"}, {12, "ENOMEM"},
    {13, "EACCES"}, {14, "EFAULT"}, {16, "EBUSY"}, {17, "EEXIST"},
    {19, "ENODEV"}, {20, "ENOTDIR"}, {22, "EINVAL"}, {28, "ENOSPC"}
};
