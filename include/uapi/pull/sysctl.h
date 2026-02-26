// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_SYSCTL_H

# define _UAPI_PULL_SYSCTL_H


struct __sysctl_args {
    int *name;
    int nlen;
    void *oldval;
};

# endif

