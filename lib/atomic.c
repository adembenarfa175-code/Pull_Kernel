// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/types.h>

/* العمليات الذرية تضمن عدم مقاطعة العملية من قبل نواة معالجة أخرى */

int atomic_read(const atomic_t *v) {
    return (*(volatile int *)&(v)->counter);
}

void atomic_inc(atomic_t *v) {
    __sync_fetch_and_add(&v->counter, 1);
}

void atomic_dec(atomic_t *v) {
    __sync_fetch_and_sub(&v->counter, 1);
}

/* cmpxchg: Compare and Exchange - أساس بناء الأقفال المعقدة */
unsigned long __cmpxchg(volatile void *ptr, unsigned long old, unsigned long new, int size) {
    return __sync_val_compare_and_swap((unsigned long *)ptr, old, new);
}
