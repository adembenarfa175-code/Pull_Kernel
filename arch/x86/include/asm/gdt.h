// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_GDT_H

# define _PULL_GDT_H

#include <pull/types.h>

struct gdt_entry {
    u16 limit_low;
    u16 base_low;
    u8  base_middle;
    u8  access;
    u8  granularity;
    u8  base_high;
} __packed;

struct gdt_ptr {
    u16 limit;
    u64 base;
} __packed;

void gdt_init(void);
# endif

