// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_STAT_H

# define _UAPI_PULL_STAT_H

#include <pull/types.h>

struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int  st_mode;
    unsigned int  st_nlink;
    __kernel_uid_t st_uid;
    __kernel_gid_t st_gid;
    __kernel_off_t st_size;
};

# endif

