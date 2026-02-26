// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_SLAB_H
# define _PULL_SLAB_H

#include <pull/types.h>

/* Standard Allocation Functions */
void *kmalloc(size_t size, gfp_t flags);
void *kzalloc(size_t size, gfp_t flags);
void kfree(const void *objp);

/* Array Allocation Functions */
void *kmalloc_array(size_t n, size_t size, gfp_t flags);
void *kcalloc(size_t n, size_t size, gfp_t flags);

/* Virtual Memory Allocation */
void *vmalloc(unsigned long size);
void vfree(const void *addr);
void *kvmalloc(size_t size, gfp_t flags);

# endif
