// SPDX-License-Identifier: GPL-2.0-only
// Generic SPI Master Controller
struct spi_transfer {
    void *tx_buf;
    void *rx_buf;
    size_t len;
    uint32_t speed_hz;
};

void spi_sync_transfer(struct spi_transfer *xfer) {
    printk("SPI: Transferring %zu bytes at %d Hz\n", xfer->len, xfer->speed_hz);
}

void spi_init(void) {
    printk("SPI: SPI Master Bus 0 registered.\n");
}
