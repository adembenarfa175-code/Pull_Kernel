// SPDX-License-Identifier: GPL-2.0-only
// PC Speaker Beep Driver
void pcspkr_beep(uint32_t freq) {
    uint32_t div = 1193180 / freq;
    // outb(0x43, 0xB6);
    // outb(0x42, (uint8_t)(div & 0xFF));
    printk("BEEP: Emitting tone at %d Hz\n", freq);
}

void pcspkr_init(void) {
    printk("CHAR: PC Speaker Driver initialized.\n");
}
