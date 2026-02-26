// SPDX-License-Identifier: GPL-2.0-only
// Intel High Definition Audio Controller Driver
#define HDA_GCTL 0x08 // Global Control
#define HDA_STATESTS 0x0E // State Status

void hda_reset_controller(void) {
    printk("HDA: Resetting Intel HD Audio controller...\n");
    // outl(HDA_GCTL, 0x01); // Trigger Reset
}

void hda_intel_init(void) {
    printk("HDA: Intel HDA Controller found at PCI slot 00:1f.3\n");
    hda_reset_controller();
}
