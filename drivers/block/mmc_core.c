// SPDX-License-Identifier: GPL-2.0-only
// SD/MMC Card Management Layer
void mmc_set_clock(uint32_t hz) {
    printk("MMC: Setting bus clock to %d MHz\n", hz/1000000);
}

void mmc_init(void) {
    printk("MMC: SD-Card Host Controller Interface (SDHCI) online.\n");
    mmc_set_clock(50000000); // 50 MHz
}
