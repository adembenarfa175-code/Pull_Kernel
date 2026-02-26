// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/uaccess.h>
#include <pull/string.h>

/* ملاحظة: في الأنظمة الحقيقية هذه الدوال تعتمد على الـ MMU وفحص الصلاحيات */
unsigned long copy_from_user(void *to, const void *from, unsigned long n) {
    // Copy simulation: You must ensure that the 'from' address is within the user scope
    memcpy(to, from, n);
    return 0; // Returning 0 means the entire operation was successful
}

unsigned long copy_to_user(void *to, const void *from, unsigned long n) {
    // Copy simulation: You must ensure that the 'to' address is within the user scope
    memcpy(to, from, n);
    return 0;
}
