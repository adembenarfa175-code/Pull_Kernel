// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_BITOPS_H

# define _PULL_BITOPS_H

# define BIT(nr) (1UL << (nr))

static inline void set_bit(int nr, unsigned long *addr) {
    addr[nr / 64] |= (1UL << (nr % 64));
}
# endif

