// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_ARM64_PROCESSOR_H

# define _PULL_ARM64_PROCESSOR_H


#include <pull/types.h>

/* identification levels Exception in ARMv8 */
# define EL0 0  /* User */

# define EL1 1  /* Kernel */

# define EL2 2  /* Hypervisor */

# define EL3 3  /* Secure Monitor */


/* job To get on level Exception present */
static inline u32 get_current_el(void) {
    u32 el;
    asm volatile("mrs %0, CurrentEL" : "=r" (el));
    return el >> 2;
}

# endif

