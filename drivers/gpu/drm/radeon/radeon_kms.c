#include <stdint.h>

void radeon_blit_copy(uint32_t *src, uint32_t *dst, int x, int y, int width, int stride) {
    for (int i = 0; i < width; i++) {
        uint32_t pixel = src[i];
        dst[(y * stride) + (x + i)] = pixel;
    }
}
