// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
struct request {
    uint64_t sector;
    uint32_t nr_sectors;
    int dir; // 0 for READ, 1 for WRITE
};

void ssd_process_request(struct request *req) {
    const char *op = req->dir ? "WRITE" : "READ";
    printk("DISK: %s %d sectors starting at %llu\n", op, req->nr_sectors, req->sector);
}

void ssd_init(void) {
    printk("DISK: SSD Block Layer Initialized (I/O Scheduler: MQ-DEADLINE)\n");
}
