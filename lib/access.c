// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/kernel.h>

/* تمنع هذه الماكروات المترجم (Compiler) من تحسين الكود بشكل يضر البيانات المتغيرة */

/* READ_ONCE: قراءة القيمة مباشرة من الذاكرة */
# define READ_ONCE(x) (*(volatile typeof(x) *)&(x))

/* WRITE_ONCE: الكتابة مباشرة في الذاكرة */
# define WRITE_ONCE(x, val) (*(volatile typeof(x) *)&(x) = (val))
