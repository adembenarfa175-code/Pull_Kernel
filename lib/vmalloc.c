// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/slab.h>
#include <pull/mm.h>

void *kvmalloc(size_t size, gfp_t flags) {
    void *ptr;
    /* محاولة حجز ذاكرة متصلة أولاً (kmalloc) */
    ptr = kmalloc(size, flags);
    if (ptr)
        return ptr;
    /* إذا فشلت، نلجأ للذاكرة الافتراضية (vmalloc) */
    return vmalloc(size);
}

/* الدوال get_free_page و free_page ترتبط مباشرة بـ pmm.c في مشروعك */
