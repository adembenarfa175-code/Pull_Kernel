// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_KCSAN_H

# define _PULL_KCSAN_H

void kcsan_check_access(const volatile void *ptr, size_t size, int type);
# endif

