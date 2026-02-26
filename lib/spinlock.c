// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/spinlock.h>
#include <pull/interrupt.h>

/* ملاحظة: الأقفال تعتمد بشكل كبير على المعمارية (arch-specific) */

void spin_lock(spinlock_t *lock) {
    /* منطق الانتظار النشط (Busy-waiting) حتى يصبح القفل متاحاً */
    while (__sync_lock_test_and_set(&lock->lock, 1)) {
        // CPU Pause to save power
    }
}

void spin_unlock(spinlock_t *lock) {
    __sync_lock_release(&lock->lock);
}

unsigned long spin_lock_irqsave(spinlock_t *lock) {
    unsigned long flags;
    /* 1. حفظ حالة المقاطعات الحالية وتعطيلها */
    // local_irq_save(flags);
    /* 2. أخذ القفل */
    spin_lock(lock);
    return flags;
}
