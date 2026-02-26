// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_INIT_H

# define _PULL_INIT_H

# define __init __attribute__((__section__(".init.text")))

# define __initdata __attribute__((__section__(".init.data")))

# endif

