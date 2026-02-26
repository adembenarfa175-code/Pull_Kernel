// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_SYSTEM_MAP_H

# define _PULL_SYSTEM_MAP_H


#include <pull/types.h>

/* structure represents Symbolically One in map order */
struct system_symbol {
    virt_addr_t addr;    /* address Code in Memory */
    char type;           /* type Code (T For missions, D For data, etc.) */
    const char *name;    /* name Function or variable */
};

/* Functions Search on Symbols (necessary To work Stack Trace) */
const char *find_symbol_name(virt_addr_t addr);
virt_addr_t find_symbol_address(const char *name);

/* identification border Nucleus that He puts it on The Linker */
extern unsigned long _text;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

# endif /* _PULL_SYSTEM_MAP_H */

