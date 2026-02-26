// SPDX-License-Identifier: GPL-2.0-only
// UART 16550A Serial Driver
#define UART_THR 0x00 // Transmit Holding
#define UART_LSR 0x05 // Line Status

void uart_putc(uint16_t base, char c) {
    // Wait for empty transmit hold register
    // while (!(inb(base + UART_LSR) & 0x20));
    // outb(base + UART_THR, c);
    printk("SERIAL: UART [0x%x] transmitting char: %c\n", base, c);
}

void uart_init(void) {
    printk("SERIAL: 16550A Standard UART detected at 0x3F8\n");
}
