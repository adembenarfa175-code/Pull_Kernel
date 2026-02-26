// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_KERNEL_H
# define _PULL_KERNEL_H

#include <pull/types.h>
#include <pull/compiler.h>

/* container_of: Get the structure pointer from a member pointer */
# define container_of(ptr, type, member) ({                      \
    const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
    (type *)( (char *)__mptr - offsetof(type,member) );})

# define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

/* Panic and Error Handling */
void panic(const char *fmt, ...);
# define BUG_ON(condition) do { if (unlikely(condition)) panic("BUG at %s:%d", __FILE__, __LINE__); } while (0)
# define WARN_ON(condition) ({                                   \
    int __ret_warn = !!(condition);                             \
    if (unlikely(__ret_warn))                                   \
        printk("WARNING at %s:%d\n", __FILE__, __LINE__);       \
    unlikely(__ret_warn);                                       \
})

# endif
