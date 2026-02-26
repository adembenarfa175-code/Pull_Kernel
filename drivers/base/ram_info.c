// SPDX-License-Identifier: GPL-2.0-only
struct ram_dimm { char serial[20]; uint32_t speed_mhz; uint16_t voltage_mv; uint64_t size_bytes; };

void ram_identify_dimm(struct ram_dimm *dimm, int slot) {
    printk("RAM: Slot %d: %llu MB | %d MHz | %d mV | SN: %s\n", 
           slot, dimm->size_bytes / (1024*1024), dimm->speed_mhz, dimm->voltage_mv, dimm->serial);
}

void ram_init(void) {
    struct ram_dimm d1 = {"PULL-2026-X1", 6400, 1100, 17179869184ULL};
    ram_identify_dimm(&d1, 0);
}
