// SPDX-License-Identifier: GPL-2.0-only
// RTC Core Subsystem
struct rtc_device {
    const char *name;
    int irq;
    bool registered;
};

int rtc_register_device(struct rtc_device *rtc) {
    if (!rtc) return -1;
    rtc->registered = true;
    printk("RTC: Registered clock device: %s\n", rtc->name);
    return 0;
}

void rtc_core_init(void) {
    struct rtc_device main_rtc = {"CMOS_RTC", 8, false};
    rtc_register_device(&main_rtc);
}
