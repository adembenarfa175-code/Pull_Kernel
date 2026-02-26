// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_SCHED_H

# define _UAPI_PULL_SCHED_H

# define SCHED_NORMAL 0

# define SCHED_FIFO   1

# define SCHED_RR     2

struct sched_param { int sched_priority; };
# endif

