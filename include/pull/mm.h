// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_MM_H
# define _PULL_MM_H

#include <pull/types.h>

/* Page Allocation */
unsigned long get_free_page(gfp_t gfp_mask);
void free_page(unsigned long addr);

/* Error Pointer Handling (IS_ERR, PTR_ERR, etc.) */
# define MAX_ERRNO4095
# define IS_ERR_VALUE(x) unlikely((unsigned long)(void *)(x) >= (unsigned long)-MAX_ERRNO)

static inline void *ERR_PTR(long error) { return (void *) error; }
static inline long PTR_ERR(const void *ptr) { return (long) ptr; }
static inline bool IS_ERR(const void *ptr) { return IS_ERR_VALUE(ptr); }
static inline bool IS_ERR_OR_NULL(const void *ptr) { return !ptr || IS_ERR(ptr); }
static inline int PTR_ERR_OR_ZERO(const void *ptr) { return IS_ERR(ptr) ? PTR_ERR(ptr) : 0; }

# endif
