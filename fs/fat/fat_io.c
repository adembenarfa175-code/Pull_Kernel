// SPDX-License-Identifier: GPL-2.0-only
// FAT16/FAT32 Sector I/O Logic
void fat_read_cluster(uint32_t cluster) {
    printk("FAT-FS: Reading Cluster 0x%08x from disk.\n", cluster);
}
