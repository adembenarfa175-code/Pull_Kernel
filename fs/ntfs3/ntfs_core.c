#include <stdint.h>

struct mft_entry { uint32_t magic; uint16_t usa_ofs; uint16_t usa_count; uint64_t lsn; };

int validate_mft_entry(struct mft_entry *m) {
    if (m->magic != 0x454C4946) return -1; // "FILE"
    return 0;
}
