// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_SCHED_H

# define _PULL_SCHED_H

#include <pull/list.h>

# define TASK_RUNNING         0

# define TASK_INTERRUPTIBLE   1

# define TASK_UNINTERRUPTIBLE 2


struct task_struct {
    long state;
    void *stack;
    unsigned int cpu;
    int pid;
    struct list_head run_list;
    char comm[16];
};
# endif

