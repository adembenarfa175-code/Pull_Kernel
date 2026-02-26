// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_IDT_H

# define _PULL_IDT_H

#include <pull/types.h>

struct idt_entry {
    u16 offset_low;
    u16 selector;
    u8  ist;
    u8  types_attr;
    u16 offset_mid;
    u32 offset_high;
    u32 zero;
} __packed;

struct idt_ptr {
    u16 limit;
    u64 base;
} __packed;

void idt_init(void);
# endif

