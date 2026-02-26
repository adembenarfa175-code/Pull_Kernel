// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_VIDEODEV2_H

# define _UAPI_PULL_VIDEODEV2_H

struct v4l2_capability { char driver[16]; char card[32]; unsigned int version; };
# define VIDIOC_QUERYCAP _IOR('V', 0, struct v4l2_capability)

# endif

