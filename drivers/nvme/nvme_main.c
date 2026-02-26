// SPDX-License-Identifier: GPL-2.0-only
#include <uapi/pull/nvme.h>

struct nvme_admin_cmd { uint8_t opcode; uint32_t nsid; uint64_t addr; uint32_t len; };

void nvme_submit_admin(struct nvme_admin_cmd *cmd) {
    printk("NVMe-ADM: Executing Opcode 0x%02x for NSID %d (Buffer: 0x%llx)\n", 
           cmd->opcode, cmd->nsid, cmd->addr);
}

void nvme_pci_probe(void) {
    struct nvme_admin_cmd identify = { .opcode = 0x06, .nsid = 0, .addr = 0x2000, .len = 4096 };
    printk("NVMe-PCI: Found Controller - Submitting Identify...\n");
    nvme_submit_admin(&identify);
}
