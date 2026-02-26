// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
#include <pull/mm.h>
#include <pull/kernel.h>

#define MAX_PAGE_COUNT 0x100000
uint8_t page_bitmap[MAX_PAGE_COUNT / 8];

void pmm_set_bit(uint32_t page) {
    page_bitmap[page / 8] |= (1 << (page % 8));
}

void pmm_clear_bit(uint32_t page) {
    page_bitmap[page / 8] &= ~(1 << (page % 8));
}

int pmm_test_bit(uint32_t page) {
    return page_bitmap[page / 8] & (1 << (page % 8));
}

void *pmm_alloc_page(void) {
    for (uint32_t i = 0; i < MAX_PAGE_COUNT; i++) {
        if (!pmm_test_bit(i)) {
            pmm_set_bit(i);
            uint64_t addr = (uint64_t)i * 4096;
            printk("PMM: Allocated page at 0x%llx\n", addr);
            return (void *)addr;
        }
    }
    return NULL;
}

void pmm_free_page(void *ptr) {
    uint32_t page = (uint32_t)((uint64_t)ptr / 4096);
    pmm_clear_bit(page);
    printk("PMM: Freed page index %d\n", page);
}

void pmm_init(uint64_t mem_size) {
    uint32_t total_pages = mem_size / 4096;
    printk("PMM: Initializing for %llu MB (%d pages)\n", mem_size / (1024*1024), total_pages);
    for(int i = 0; i < (MAX_PAGE_COUNT/8); i++) page_bitmap[i] = 0;
}
