// SPDX-License-Identifier: GPL-2.0-only
void bmp280_read_pressure(void) {
    int32_t press = 101325; // Pa (Sea Level)
    printk("IIO: BMP280 Sensor - Barometric Pressure: %d Pa\n", press);
}

void bmp280_init(void) {
    printk("IIO: Bosch BMP280 Barometer driver online.\n");
}
