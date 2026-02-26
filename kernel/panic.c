// SPDX-License-Identifier: GPL-2.0-only
void panic(const char *fmt, ...) {
    printk("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printk("KERNEL PANIC: %s\n", fmt);
    printk("Dumping CPU Registers and Stack Trace...\n");
    while(1); // Halt
}
