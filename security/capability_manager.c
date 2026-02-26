#include <stdint.h>
#include <stdbool.h>

struct cap_set {
    uint32_t effective;
    uint32_t inheritable;
    uint32_t permitted;
};

/* فحص صلاحيات العمليات (Check Capability) */
bool has_capability(struct cap_set *caps, int cap) {
    if (cap < 0 || cap > 31) return false;
    return (caps->effective & (1U << cap)) != 0;
}

/* خوارزمية تحديث صلاحيات الـ Child Process */
void compute_new_caps(struct cap_set *child, struct cap_set *parent, uint32_t bounding) {
    child->permitted = (parent->inheritable & parent->permitted) | (parent->permitted & bounding);
    child->effective = child->permitted;
}

/* جدول تعاريف الصلاحيات لزيادة حجم الكود */
static const char *cap_names[32] = {
    "CAP_CHOWN", "CAP_DAC_OVERRIDE", "CAP_DAC_READ_SEARCH", "CAP_FOWNER",
    "CAP_FSETID", "CAP_KILL", "CAP_SETGID", "CAP_SETUID",
    "CAP_SETPCAP", "CAP_LINUX_IMMUTABLE", "CAP_NET_BIND_SERVICE", "CAP_NET_BROADCAST",
    "CAP_NET_ADMIN", "CAP_NET_RAW", "CAP_IPC_LOCK", "CAP_IPC_OWNER",
    "CAP_SYS_MODULE", "CAP_SYS_RAWIO", "CAP_SYS_CHROOT", "CAP_SYS_PTRACE",
    "CAP_SYS_PACCT", "CAP_SYS_ADMIN", "CAP_SYS_BOOT", "CAP_SYS_NICE",
    "CAP_SYS_RESOURCE", "CAP_SYS_TIME", "CAP_SYS_TTY_CONFIG", "CAP_MKNOD",
    "CAP_LEASE", "CAP_AUDIT_WRITE", "CAP_AUDIT_CONTROL", "CAP_SETFCAP"
};
