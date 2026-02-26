// SPDX-License-Identifier: GPL-2.0-only
// Non-Volatile RAM Driver
static uint8_t nvram_data[512];

void nvram_read(int offset, size_t len) {
    printk("NVRAM: Reading %zu bytes from offset 0x%x\n", len, offset);
}

void nvram_write(int offset, uint8_t val) {
    nvram_data[offset % 512] = val;
    printk("NVRAM: Writing to BIOS config area...\n");
}
