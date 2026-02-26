// SPDX-License-Identifier: GPL-2.0-only
// MAC Address Management Utility
void print_mac_pretty(uint8_t *mac) {
    printk("NET-ADDR: %02x:%02x:%02x:%02x:%02x:%02x\n", 
           mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
}

void mac_mgmt_init(void) {
    uint8_t dummy_mac[] = {0x00, 0x0C, 0x29, 0xAB, 0xCD, 0xEF};
    print_mac_pretty(dummy_mac);
}
