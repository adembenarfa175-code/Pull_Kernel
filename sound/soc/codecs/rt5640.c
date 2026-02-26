#include <stdint.h>

void rt5640_update_dma_pointer(uint32_t *ptr, uint32_t size, uint32_t bytes_sent) {
    *ptr = (*ptr + bytes_sent) % size;
}
