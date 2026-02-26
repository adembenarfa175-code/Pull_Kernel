// SPDX-License-Identifier: GPL-2.0-only
// Smart Fan Speed Controller logic
struct fan_dev {
    uint32_t rpm;
    uint8_t duty_cycle; // 0-255 (PWM)
};

void set_fan_speed(struct fan_dev *fan, uint8_t level) {
    fan->duty_cycle = level;
    fan->rpm = (level * 5000) / 255;
    printk("THERMAL: Adjusting Fan PWM to %d (Calculated RPM: %d)\n", level, fan->rpm);
}

void fan_init(void) {
    printk("THERMAL: PWM Fan Controller registered on I/O Bus.\n");
}
