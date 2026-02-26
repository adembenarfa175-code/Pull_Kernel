// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_FS_H

# define _UAPI_PULL_FS_H

# define READ 0

# define WRITE 1

# define SEEK_SET 0

# define SEEK_CUR 1

# define SEEK_END 2

struct file_clone_range { long long src_fd; long long src_offset; };
# endif

