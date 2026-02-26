// SPDX-License-Identifier: GPL-2.0-only
#include <pull/kernel.h>

struct io_request { uint64_t sector; uint32_t count; int priority; struct io_request *next; };

void deadline_dispatch(struct io_request *req) {
    while(req) {
        printk("IO-SCHED: Dispatching %s at sector %llu (Priority: %d)\n", 
               (req->count > 100) ? "Burst" : "Single", req->sector, req->priority);
        req = req->next;
    }
}

void io_scheduler_init(void) {
    struct io_request r1 = { .sector = 2048, .count = 8, .priority = 1, .next = NULL };
    printk("IO-SCHED: Deadline Scheduler multi-queue initialized.\n");
    deadline_dispatch(&r1);
}
