// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/printk.h>
#include <pull/string.h>
#include <stdarg.h>

/* دالة الطباعة الأساسية للنواة */
void printk(const char *fmt, ...) {
    // Note: Here the code is linked to the serial output.
    // Architecture-based (x86/ARM)
    // We are currently simulating the outputs
}

/* تنفيذ دوال الـ pr_ و dev_ يتم عبر ماكرو في الهيدر يستدعي printk */
