// SPDX-License-Identifier: GPL-2.0-only
// Advanced PS/2 Mouse Protocol Handler
#include <pull/interrupt.h>

struct mouse_packet {
    uint8_t status;
    int16_t x, y;
};

void mouse_parse_packet(uint8_t *buf, struct mouse_packet *pkt) {
    pkt->status = buf[0];
    pkt->x = (int16_t)buf[1] - ((buf[0] << 4) & 0x100);
    pkt->y = (int16_t)buf[2] - ((buf[0] << 3) & 0x100);
    
    if (pkt->status & 0x01) printk("MOUSE: Left Button Pressed\n");
    if (pkt->status & 0x02) printk("MOUSE: Right Button Pressed\n");
}

void ps2_mouse_init(void) {
    printk("INPUT: Intelligent PS/2 Mouse driver enabled.\n");
}
