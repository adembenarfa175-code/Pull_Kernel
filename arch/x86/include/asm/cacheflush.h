// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _ASM_X86_CACHEFLUSH_H

# define _ASM_X86_CACHEFLUSH_H

static inline void flush_cache_all(void) { asm volatile("wbinvd" : : : "memory"); }
# endif

