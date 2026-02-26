// SPDX-License-Identifier: GPL-2.0-only
// Virtual Loopback Network Interface
void lo_setup(void) {
    printk("NET: Interface 'lo' configured (127.0.0.1/8)\n");
    printk("NET: MTU for loopback set to 65536\n");
}

void lo_init(void) {
    lo_setup();
}
