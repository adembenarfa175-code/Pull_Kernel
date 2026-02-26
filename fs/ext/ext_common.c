// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/fs.h>

struct ext4_super_block {
    uint32_t s_inodes_count;
    uint32_t s_blocks_count_lo;
    uint32_t s_free_blocks_count_lo;
    uint16_t s_magic;           // 0xEF53
    uint32_t s_feature_incompat; // هنا نفرق بين EXT2 و EXT4
    // ...
};

/* نظام الـ Extents في EXT4 (سر المرونة والأداء) */
struct ext4_extent {
    uint32_t ee_block;    /* أول بلوك منطقي */
    uint16_t ee_len;      /* عدد البلوكات */
    uint16_t ee_start_hi; /* الجزء العلوي من العنوان الفيزيائي */
    uint32_t ee_start_lo; /* الجزء السفلي */
};
