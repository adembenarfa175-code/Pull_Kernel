// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/module.h>
#include <pull/kernel.h>

/* هذه الماكروات لا تولد كوداً تنفيذياً بل تضع معلومات في قطاعات (Sections) خاصة داخل ملف الـ ELF */

/* تذكير: MODULE_LICENSE و MODULE_AUTHOR هي معلومات وصفية للمترجم */
// Defined in include/pull/module.h as __attribute__((section(".modinfo")))

/* تنفيذ مبسط لـ EXPORT_SYMBOL: يجعل الدالة مرئية للموديولات الأخرى */
// This is done by placing the function address in the symbol table.
