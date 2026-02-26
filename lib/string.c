// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/types.h>
#include <pull/string.h>

/**
 * memset - ملء منطقة من الذاكرة بقيمة محددة
 * @s: مؤشر لمنطقة الذاكرة
 * @c: القيمة المراد وضعها
 * @count: عدد البايتات
 */
void *memset(void *s, int c, size_t count) {
    char *xs = s;
    while (count--)
        *xs++ = c;
    return s;
}

/**
 * memcpy - نسخ منطقة ذاكرة إلى أخرى
 * @dest: الوجهة
 * @src: المصدر
 * @count: عدد البايتات
 * * ملاحظة: هذه الدالة تفترض عدم تداخل المناطق (Non-overlapping)
 */
void *memcpy(void *dest, const void *src, size_t count) {
    char *tmp = dest;
    const char *s = src;

    while (count--)
        *tmp++ = *s++;
    return dest;
}

/**
 * scnprintf - طباعة منسقة آمنة داخل وسيط (Buffer)
 */
int scnprintf(char *buf, size_t size, const char *fmt, ...) {
    va_list args;
    int i;

    va_start(args, fmt);
    i = vscnprintf(buf, size, fmt, args);
    va_end(args);

    return i;
}
