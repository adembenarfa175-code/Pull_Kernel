// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_SELECT_H

# define _UAPI_PULL_SELECT_H

# define FD_SETSIZE 1024

typedef struct { unsigned long fds_bits[FD_SETSIZE / 64]; } pull_fd_set;
# endif

