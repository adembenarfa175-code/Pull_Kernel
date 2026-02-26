// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_SPINLOCK_H

# define _PULL_SPINLOCK_H

typedef struct { volatile int lock; } spinlock_t;
static inline void spin_lock(spinlock_t *lock) {
    while (__sync_lock_test_and_set(&lock->lock, 1));
}
static inline void spin_unlock(spinlock_t *lock) {
    __sync_lock_release(&lock->lock);
}
# endif

