// SPDX-License-Identifier: GPL-2.0-only
// AT Keyboard Driver for Pull Kernel
struct atkbd {
    bool set;
    int state;
    uint8_t last_code;
};

void atkbd_interrupt(struct atkbd *kbd, uint8_t scancode) {
    if (scancode == 0xE0) { kbd->state = 1; return; }
    printk("ATKBD: Received scancode 0x%02x [State: %d]\n", scancode, kbd->state);
    kbd->last_code = scancode;
    kbd->state = 0;
}

void atkbd_init(void) {
    printk("INPUT: AT-style Keyboard driver online.\n");
}
