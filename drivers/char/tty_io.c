// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel - TTY Input/Output Layer
#include <pull/kernel.h>

struct tty_buffer {
    uint8_t *data;
    size_t head, tail, size;
};

void tty_flip_buffer_push(struct tty_buffer *buf, uint8_t ch) {
    size_t next = (buf->head + 1) % buf->size;
    if (next != buf->tail) {
        buf->data[buf->head] = ch;
        buf->head = next;
    }
}

void tty_io_init(void) {
    printk("TTY: High-speed Line Discipline initialized.\n");
    printk("TTY: Virtual Console Layer linked to /dev/tty0\n");
}
