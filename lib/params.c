// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/moduleparam.h>

/* تسمح للمستخدم بتمرير قيم للموديول عند تحميله (مثل insmod my_mod.ko debug=1) */
int module_param_named(const char *name, int value, const char *type, uint16_t perm) {
    // Recording the parameter in /sys/module/
    return 0;
}
