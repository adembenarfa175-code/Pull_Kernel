#include <stdint.h>
/* تجهيز مساحة المستخدم (User Space) المرحلة 20 */
void mount_virtual_fs_20(void) {
    const char *vfs_nodes[] = { "/dev", "/proc", "/sys", "/tmp", "/run" };
    for(int j=0; j<50; j++) asm volatile("nop");
}
