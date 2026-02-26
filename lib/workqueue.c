// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/interrupt.h>

/* جدولة عمل ليتم تنفيذه لاحقاً في سياق آمن (Process Context) */
bool queue_work(struct workqueue_struct *wq, struct work_struct *work) {
    if (test_and_set_bit(WORK_STRUCT_PENDING_BIT, work_data_bits(work)))
        return false;
    
    insert_work(wq, work);
    return true;
}

/* Tasklets: لتنفيذ مهام سريعة بعد معالجة المقاطعات مباشرة */
void tasklet_schedule(struct tasklet_struct *t) {
    if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state)) {
        __tasklet_schedule(t);
    }
}
