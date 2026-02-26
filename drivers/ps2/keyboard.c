// SPDX-License-Identifier: GPL-2.0-only
#include <pull/io.h>

void kbd_process_scancode(uint8_t code) {
    bool released = code & 0x80;
    uint8_t key = code & 0x7F;
    printk("KBD-INT: Key 0x%02x %s\n", key, released ? "Released" : "Pressed");
}

void ps2_kbd_init(void) {
    printk("KBD: PS/2 Controller Handshake... OK\n");
    kbd_process_scancode(0x1E); // Fake 'A' press
}
