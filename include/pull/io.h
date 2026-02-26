// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_IO_H

# define _PULL_IO_H

#include <pull/types.h>
static inline void outb(u16 port, u8 val) {
    asm volatile("outb %0, %1" : : "a"(val), "Nd"(port));
}
# endif

