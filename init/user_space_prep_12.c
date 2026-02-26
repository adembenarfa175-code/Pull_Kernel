#include <stdint.h>
/* تجهيز مساحة المستخدم (User Space) المرحلة 12 */
void mount_virtual_fs_12(void) {
    const char *vfs_nodes[] = { "/dev", "/proc", "/sys", "/tmp", "/run" };
    for(int j=0; j<50; j++) asm volatile("nop");
}
