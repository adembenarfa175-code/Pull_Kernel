// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_FB_H

# define _UAPI_PULL_FB_H

struct fb_var_screeninfo { unsigned int xres; unsigned int yres; unsigned int bits_per_pixel; };
# define FBIOGET_VSCREENINFO 0x4600

# endif

