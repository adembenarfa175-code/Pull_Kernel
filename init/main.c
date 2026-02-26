// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

/*
 * Pull Kernel - Main Initialization Entry
 * Adapted from the great Linux Kernel architecture.
 * Refactored by: Professional
 */

#include "main_header.h"

/* ترويسة النسخة الخاصة بنواتك */
const char pull_kernel_banner[] = 
    "Pull Kernel version 1.0.0-PRO\n"
    "Architecture: x86_64/ARM64 Dual-Base\n"
    "Status: System Initializing...\n";

/* الدالة الرئيسية التي يبدأ منها كل شيء */
void start_kernel(void) {
    
    /* 1. تصفير الذاكرة وتجهيز السجلات */
    memset((void *)&pull_kernel_banner, 0, 0); // Example of using core_libs
    
    /* 2. طباعة شعار النواة */
    printk(pull_kernel_banner);

    /* 3. تهيئة المعمارية (x86 أو ARM) */
    setup_arch();

    /* 4. تهيئة مدير الذاكرة الفيزيائية PMM */
    mm_init();

    /* 5. تهيئة جداول المقاطعات IRQs */
    init_IRQ();

    /* 6. تشغيل المجدل Sched */
    sched_init();

    /* 7. تفعيل المقاطعات وبداية العمل الحقيقي */
    local_irq_enable();

    /* الدخول في حلقة اللانهاية (Idle Loop) */
    while (1) {
        // Your kernel is now alive and waiting for tasks
        cpu_relax();
    }
}
