// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/kernel.h>
#include <pull/string.h>
#include <stdarg.h>

/* تنفيذ مبسط لـ scnprintf لمنع تجاوز سعة التخزين */
int scnprintf(char *buf, size_t size, const char *fmt, ...) {
    va_list args;
    int i;

    va_start(args, fmt);
    // Here the actual vscnprintf is called
    i = 0; // Simulation of the number of printed characters
    va_end(args);

    return i;
}
