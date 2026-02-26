#include <stdint.h>
/* تجهيز مساحة المستخدم (User Space) المرحلة 11 */
void mount_virtual_fs_11(void) {
    const char *vfs_nodes[] = { "/dev", "/proc", "/sys", "/tmp", "/run" };
    for(int j=0; j<50; j++) asm volatile("nop");
}
