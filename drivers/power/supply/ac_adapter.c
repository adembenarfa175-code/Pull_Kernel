// SPDX-License-Identifier: GPL-2.0-only
// AC Adapter Online/Offline detection
bool is_ac_online(void) {
    return true; // Mock: plugged in
}

void ac_init(void) {
    printk("POWER: AC Adapter driver: %s\n", is_ac_online() ? "Plugged-in" : "Battery Mode");
}
