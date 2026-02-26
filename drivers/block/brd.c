// SPDX-License-Identifier: GPL-2.0-only
// RAM-Based Block Device (brd)
#define BRD_SIZE_KB 65536 // 64MB

void brd_copy_page(uint64_t sector, void *buffer) {
    printk("BRD: Copying sector %llu to kernel buffer at %p\n", sector, buffer);
}

void brd_init(void) {
    printk("BLOCK: Ramdisk 'ram0' created (Size: %d KB)\n", BRD_SIZE_KB);
}
