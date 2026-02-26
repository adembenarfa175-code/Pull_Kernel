// SPDX-License-Identifier: GPL-2.0-only
// Power Supply Sysfs Interface
void power_show_property(const char *prop) {
    printk("SYSFS: Power Property Requested: %s\n", prop);
}

void pwr_iface_init(void) {
    printk("POWER: Sysfs power_supply class created.\n");
}
