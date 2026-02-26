// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/slab.h>
#include <pull/mm.h>

void *kzalloc(size_t size, gfp_t flags) {
    void *ptr = kmalloc(size, flags);
    if (ptr)
        memset(ptr, 0, size);
    return ptr;
}

void *kmalloc_array(size_t n, size_t size, gfp_t flags) {
    if (n != 0 && size > (size_t)-1 / n)
        return NULL;
    return kmalloc(n * size, flags);
}

void *kcalloc(size_t n, size_t size, gfp_t flags) {
    return kmalloc_array(n, size, flags | __GFP_ZERO);
}

/* ملاحظة: kmalloc و kfree عادة ما ترتبط بمدير الذاكرة الفعلي (PMM/VMM) */
