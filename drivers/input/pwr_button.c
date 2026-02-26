// SPDX-License-Identifier: GPL-2.0-only
// Power and Sleep Button Driver
void handle_pwr_btn_press(void) {
    printk("INPUT: Power Button Pressed! Initiating ACPI Shutdown...\n");
}

void pwr_btn_init(void) {
    printk("INPUT: ACPI Fixed Feature Power Button driver online.\n");
}
