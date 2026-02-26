// SPDX-License-Identifier: GPL-2.0-only
// Device Mapper Cache logic
void dm_cache_promote(uint64_t block) {
    printk("DM-CACHE: Promoting hot block %llu to SSD cache tier.\n", block);
}

void dm_cache_init(void) {
    printk("MD: Device Mapper Caching policy 'smq' loaded.\n");
}
