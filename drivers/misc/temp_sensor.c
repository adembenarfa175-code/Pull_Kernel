// SPDX-License-Identifier: GPL-2.0-only
// I2C Temperature Sensor Driver
struct temp_data {
    int celsius;
    int fahrenheit;
};

void update_temp_sensor(struct temp_data *td) {
    td->celsius = 35; // Mock data
    td->fahrenheit = (td->celsius * 9/5) + 32;
    printk("MISC: Thermal Sensor - Temp: %d C (%d F)\n", td->celsius, td->fahrenheit);
}

void temp_sensor_init(void) {
    printk("MISC: External I2C Temperature Sensor registered.\n");
}
