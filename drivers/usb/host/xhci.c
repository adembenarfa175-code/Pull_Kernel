// SPDX-License-Identifier: GPL-2.0-only
#include <pull/io.h>

struct xhci_trb { uint64_t parameter; uint32_t status; uint32_t control; };

void xhci_ring_doorbell(uint32_t slot_id, uint32_t target) {
    uint32_t doorbell = (slot_id << 16) | target;
    printk("xHCI: Ringing Doorbell for Slot %d, Target %d [Value: 0x%x]\n", slot_id, target, doorbell);
}

void xhci_post_command(struct xhci_trb *cmd) {
    printk("xHCI: Posting Command TRB: Type %d, Param 0x%llx\n", (cmd->control >> 10) & 0x3F, cmd->parameter);
}

void xhci_hcd_init(void) {
    struct xhci_trb reset_cmd = { .parameter = 0, .control = (1 << 10) }; // Reset Device
    xhci_post_command(&reset_cmd);
    xhci_ring_doorbell(1, 0);
}
