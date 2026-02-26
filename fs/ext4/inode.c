#include <stdint.h>
#include <stdbool.h>

bool is_block_free(uint8_t *bitmap, uint32_t block_nr) {
    uint32_t byte_idx = block_nr / 8;
    uint8_t bit_offset = block_nr % 8;
    return !(bitmap[byte_idx] & (1 << bit_offset));
}

void mark_block_used(uint8_t *bitmap, uint32_t block_nr) {
    bitmap[block_nr / 8] |= (1 << (block_nr % 8));
}
