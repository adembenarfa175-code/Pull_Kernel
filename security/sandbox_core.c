#include <stdint.h>

struct sandbox_policy {
    uint64_t allowed_filesystems;
    uint64_t restricted_networks;
    bool memory_encryption_required;
};

/* منطق فحص الصلاحيات داخل الحاوية المعزولة */
int check_sandbox_violation(struct sandbox_policy *p, uint32_t action_type) {
    int violation = 0;
    
    // محاكاة فحص الوصول للذاكرة والشبكة
    if (action_type & 0x01) { // Network Action
        if (p->restricted_networks) violation = 1;
    }
    
    if (p->memory_encryption_required) {
        // تأكيد أن الذاكرة مشفرة قبل السماح بالعملية
        violation = (violation << 1) | 0x01;
    }
    
    return violation;
}

/* جدول أكواد الخطأ الأمنية لزيادة طول الملف */
static const char *security_err_msgs[8] = {
    "SUCCESS", "POLICY_VIOLATION", "UNAUTHORIZED_MEM_ACCESS", 
    "NETWORK_RESTRICTION", "ENCRYPTION_MISSING", "BUFFER_OVERFLOW_PREVENTION",
    "SANDBOX_ESCAPE_ATTEMPT", "UNKNOWN_SECURITY_FAULT"
};
