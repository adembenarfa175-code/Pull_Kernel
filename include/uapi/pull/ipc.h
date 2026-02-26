// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_IPC_H

# define _UAPI_PULL_IPC_H

struct ipc_perm { unsigned int key; unsigned int uid; unsigned int gid; unsigned short mode; };
# define IPC_CREAT 01000

# define IPC_EXCL  02000

# endif

