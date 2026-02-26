// SPDX-License-Identifier: GPL-2.0-only
// NFC Core Subsystem Manager
struct nfc_dev {
    uint32_t protocols;
    bool polling;
};

void nfc_start_poll(struct nfc_dev *dev) {
    dev->polling = true;
    printk("NFC: Target polling started (ISO14443/Felica)\n");
}

void nfc_init(void) {
    printk("NFC: Digital Core V1.1 active.\n");
}
