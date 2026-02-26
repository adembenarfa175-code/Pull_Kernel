// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_STRING_H

# define _PULL_STRING_H

#include <pull/types.h>
void *pull_memcpy(void *dest, const void *src, size_t n);
size_t pull_strlen(const char *s);
# endif

