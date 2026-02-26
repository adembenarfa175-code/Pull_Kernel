// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/kernel.h>

void mdelay(unsigned long msecs) {
    /* تأخير نشط (Busy-loop) - يستخدم في سياق المقاطعات */
    unsigned long loops = msecs * loops_per_msec;
    while (loops--) {
        cpu_relax();
    }
}

void msleep(unsigned int msecs) {
    /* نوم تفاعلي - يجعل العملية الحالية تتنازل عن المعالج */
    set_current_state(TASK_INTERRUPTIBLE);
    schedule_timeout(msecs_to_jiffies(msecs));
}

void usleep_range(unsigned long min, unsigned long max) {
    /* نوم بدقة عالية للميكرو ثانية */
    unsigned long range = max - min;
    // Implementation depends on hrtimers
}
