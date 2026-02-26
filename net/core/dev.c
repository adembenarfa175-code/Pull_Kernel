// SPDX-License-Identifier: GPL-2.0-only
// Core Network Device Handling
void register_netdev(const char *name) {
    printk("NET-CORE: Interface %s registered (MTU 1500).\n", name);
}
