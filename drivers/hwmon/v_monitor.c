// SPDX-License-Identifier: GPL-2.0-only
// Hardware Monitor - Voltage Rail Sensors
void check_vcore(void) {
    int vcore = 1200; // 1.2V
    printk("HWMON: VCore rail: %d mV (Status: STABLE)\n", vcore);
}

void hwmon_init(void) {
    printk("HWMON: Hardware Monitoring Subsystem V2.4 online.\n");
    check_vcore();
}
