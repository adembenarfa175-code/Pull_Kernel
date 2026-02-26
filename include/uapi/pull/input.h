// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_INPUT_H

# define _UAPI_PULL_INPUT_H

struct input_event { long long sec; long long usec; unsigned short type; unsigned short code; int value; };
# define EV_KEY 0x01

# define EV_REL 0x02

# endif

