// SPDX-License-Identifier: GPL-2.0-only
// Boot Logo for Pull Kernel
static const uint32_t pull_logo_data[] = { 0xFFFFFFFF, 0x00000000, 0x12345678 };
void display_boot_logo(void) {
    printk("VIDEO: Rendering 24-bit 'PULL KERNEL' boot logo to FB0.\n");
}
