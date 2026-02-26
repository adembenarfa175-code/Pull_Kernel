// SPDX-License-Identifier: GPL-2.0-only
// Realtek RTL-8139 Fast Ethernet Driver
#define RTL_CONFIG_1 0x52

void rtl8139_chip_reset(void) {
    printk("RTL8139: Resetting chip... Link status check.\n");
}

void rtl8139_init(void) {
    printk("NET: Realtek 8139 detected at I/O 0x3000\n");
    rtl8139_chip_reset();
}
