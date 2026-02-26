// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_BLKPG_H

# define _UAPI_PULL_BLKPG_H

struct blkpg_partition { long long start; long long length; int pno; };
# define BLKPG_ADD_PARTITION    1

# define BLKPG_DEL_PARTITION    2

# endif

