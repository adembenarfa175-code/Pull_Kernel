// SPDX-License-Identifier: GPL-2.0-only
#include <uapi/pull/nvme.h>

struct nvme_lba_format { uint16_t ms; uint8_t ds; uint8_t rp; };
struct nvme_ns_info {
    uint32_t nsid;
    uint64_t total_capacity;
    struct nvme_lba_format formats[16];
    int active_format;
};

void nvme_ns_report(struct nvme_ns_info *ns) {
    printk("NVMe: Namespace %d Online. Capacity: %llu GB\n", ns->nsid, ns->total_capacity / (1024*1024*1024));
    printk("NVMe: Sector Size: %d bytes (LBA Format %d)\n", 1 << ns->formats[ns->active_format].ds, ns->active_format);
}

void nvme_ns_init(void) {
    struct nvme_ns_info ns1 = { .nsid = 1, .total_capacity = 512110190592ULL, .active_format = 0 };
    ns1.formats[0] = (struct nvme_lba_format){ .ds = 9 }; // 512 bytes
    nvme_ns_report(&ns1);
}
