// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_SEM_H

# define _UAPI_PULL_SEM_H

#include <pull/ipc.h>
struct sembuf { unsigned short sem_num; short sem_op; short sem_flg; };
# endif

