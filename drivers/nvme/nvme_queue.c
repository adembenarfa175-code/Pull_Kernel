// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
#include <uapi/pull/nvme.h>

struct nvme_queue {
    uint16_t q_id;
    uint16_t q_depth;
    void *sq_cmds;
    void *cq_resps;
    uint32_t sq_tail;
    uint32_t cq_head;
};

int nvme_create_queue(struct nvme_queue *q, int id, int depth) {
    q->q_id = id;
    q->q_depth = depth;
    q->sq_tail = 0;
    q->cq_head = 0;
    printk("NVMe: Creating %s Queue ID: %d (Depth: %d)\n", 
           (id == 0) ? "Admin" : "I/O", id, depth);
    return 0;
}

void nvme_submit_submission(struct nvme_queue *q) {
    q->sq_tail = (q->sq_tail + 1) % q->q_depth;
    printk("NVMe: Doorbell rung for Queue %d, New Tail: %d\n", q->q_id, q->sq_tail);
}

void nvme_setup_queues(void) {
    struct nvme_queue admin_q;
    nvme_create_queue(&admin_q, 0, 64);
}
