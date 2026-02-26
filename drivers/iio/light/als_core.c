// SPDX-License-Identifier: GPL-2.0-only
// IIO Light Sensor - Ambient Light (LUX)
void als_read_lux(void) {
    uint32_t lux = 150; // Dim office light
    printk("IIO: Ambient Light level: %d Lux\n", lux);
}

void als_init(void) {
    printk("IIO: ALS (Light Sensor) driver online.\n");
}
