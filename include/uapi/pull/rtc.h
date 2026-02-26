// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _UAPI_PULL_RTC_H

# define _UAPI_PULL_RTC_H

struct rtc_time { int tm_sec; int tm_min; int tm_hour; int tm_mday; };
# define RTC_RD_TIME _IOR('p', 0x09, struct rtc_time)

# endif

