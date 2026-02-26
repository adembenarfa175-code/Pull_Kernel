// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/fs.h>
#include <pull/types.h>

/* الهيكل المشترك لـ FAT32 و exFAT */
struct fat_boot_sector {
    uint8_t  ignored[3];
    uint8_t  system_id[8];
    uint16_t bytes_per_sector;
    uint8_t  sectors_per_cluster;
    uint16_t reserved_sectors;
    uint8_t  fats_count;
    // ... تفاصيل إضافية تختلف بين 32 و ex
};

int fat_read_inode(struct inode *inode) {
    // منطق قراءة العناقيد (Clusters) من الجدول
    return 0;
}
