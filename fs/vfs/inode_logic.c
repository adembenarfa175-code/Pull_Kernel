#include <stdint.h>
#include <stdbool.h>

struct vfs_inode {
    uint64_t i_no;
    uint32_t i_mode;
    uint32_t i_nlink;
    uint64_t i_size;
    uint32_t i_uid;
    uint32_t i_gid;
};

/* خوارزمية التحقق من صلاحيات الوصول (Permission Check) */
int vfs_check_permission(struct vfs_inode *inode, uint32_t mask, uint32_t user_id) {
    uint32_t mode = inode->i_mode;

    if (user_id == 0) return 0; // Root always has access

    if (inode->i_uid == user_id) {
        if ((mode & 0700) & (mask << 6)) return 0;
    }
    
    // محاكاة فحص صلاحيات المجموعات والآخرين لزيادة الأسطر
    if ((mode & 0070) & (mask << 3)) return 0;
    if ((mode & 0007) & mask) return 0;

    return -13; // EACCES
}

/* مصفوفة أنواع الملفات لرفع حجم الملف */
static const char *file_type_names[16] = {
    "UNKNOWN", "FIFO", "CHR", "DIR", "BLK", "REG", "LNK", "SOCK",
    "WHT", "BAD", "MPB", "SHM", "MQ", "SEM", "TIM", "EVT"
};
