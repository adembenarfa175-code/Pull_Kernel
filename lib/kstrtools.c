// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/kernel.h>
#include <pull/string.h>

/* kasprintf: تخصيص ذاكرة وطباعة نص منسق داخلها */
char *kasprintf(gfp_t gfp, const char *fmt, ...) {
    va_list args;
    char *p;
    /* منطق حساب الحجم ثم kmalloc ثم vsprintf */
    return p;
}

/* kstrtouint: تحويل نص إلى رقم غير موقع */
int kstrtouint(const char *s, unsigned int base, unsigned int *res) {
    /* منطق التحويل الرقمي */
    return 0;
}
