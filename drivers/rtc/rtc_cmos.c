// SPDX-License-Identifier: GPL-2.0-only
// CMOS Real Time Clock Driver
#include <pull/io.h>

struct rtc_time { int sec, min, hour, mday, mon, year; };

void cmos_read_time(struct rtc_time *tm) {
    outb(0x70, 0x00); tm->sec = inb(0x71);
    outb(0x70, 0x02); tm->min = inb(0x71);
    outb(0x70, 0x04); tm->hour = inb(0x71);
    printk("RTC: Current CMOS Time: %02d:%02d:%02d\n", tm->hour, tm->min, tm->sec);
}

void rtc_init(void) {
    struct rtc_time now;
    printk("RTC: CMOS Driver active at IRQ 8\n");
    cmos_read_time(&now);
}
