// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/types.h>
#include <pull/jiffies.h>

/* jiffies: عداد النبضات منذ إقلاع النظام */
volatile unsigned long jiffies;

unsigned int msecs_to_jiffies(const unsigned int m) {
    /* تحويل الملي ثانية إلى نبضات بناءً على تردد HZ */
    return (m * HZ) / 1000;
}

uint64_t ktime_get(void) {
    /* إرجاع الوقت الحالي بالنانو ثانية بدقة عالية */
    return hardware_counter_to_ns(); 
}
