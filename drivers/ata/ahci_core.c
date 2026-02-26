#include <stdint.h>

struct ahci_cmd_hdr {
    uint16_t opts;
    uint16_t prdtl;
    uint32_t prdbc;
    uint32_t ctba;
    uint32_t ctbau;
};

void build_ahci_cmd(struct ahci_cmd_hdr *h, int write) {
    h->opts = (5 << 0); // Command FIS length
    if (write) h->opts |= (1 << 6); // Write bit
    h->prdbc = 0;
}
