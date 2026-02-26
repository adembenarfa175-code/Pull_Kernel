// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/fs.h>
#include <pull/kernel.h>

/* مصفوفة الأنظمة المدعومة */
static struct file_system_type *fs_list = NULL;

void mount_all_systems(struct block_device *bdev) {
    // محاولة تجربة FAT32 أولاً
    if (try_mount_fat(bdev)) return;
    
    // ثم EXT4
    if (try_mount_ext4(bdev)) return;
    
    // ثم BTRFS
    if (try_mount_btrfs(bdev)) return;

    // وأخيراً فخر الصناعة PFS
    if (try_mount_pfs(bdev)) return;
    
    printk("Error: Unknown File System on device!\n");
}
