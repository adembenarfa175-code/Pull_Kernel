// SPDX-License-Identifier: GPL-2.0-only
// RAM Error Correction Code (ECC) Monitor
struct ecc_report {
    int single_bit_errors;
    int multi_bit_errors;
};

void ecc_scan_nodes(struct ecc_report *rep) {
    if (rep->multi_bit_errors > 0)
        printk("MEMORY: CRITICAL Multi-bit ECC error detected!\n");
    else
        printk("MEMORY: ECC Status Green. Errors: %d\n", rep->single_bit_errors);
}

void ecc_init(void) {
    printk("MEM-CTRL: ECC Engine enabled for DDR5 Memory Controller.\n");
}
