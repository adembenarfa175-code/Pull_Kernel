// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_COMPILER_H
# define _PULL_COMPILER_H

/* Macros for Branch Prediction Optimization */
# define likely(x)      __builtin_expect(!!(x), 1)
# define unlikely(x)    __builtin_expect(!!(x), 0)

/* Barriers for Memory Access */
# define READ_ONCE(x)  (*(volatile typeof(x) *)&(x))
# define WRITE_ONCE(x, val) (*(volatile typeof(x) *)&(x) = (val))

# endif
