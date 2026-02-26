// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_SYSCALLS_H

# define _PULL_SYSCALLS_H

#include <pull/types.h>
typedef long (*syscall_ptr_t)(void);
# define SYSCALL_DEFINE0(name) long sys_##name(void)

# endif

