// SPDX-License-Identifier: GPL-2.0-only
// Controller Area Network (CAN) Core
struct can_frame {
    uint32_t can_id;
    uint8_t can_dlc;
    uint8_t data[8];
};

void can_receive_frame(struct can_frame *frame) {
    printk("CAN: Frame received - ID: 0x%x, DLC: %d, Data: %02x%02x...\n", 
           frame->can_id, frame->can_dlc, frame->data[0], frame->data[1]);
}

void can_init(void) {
    printk("CAN: SocketCAN sub-layer online.\n");
}
