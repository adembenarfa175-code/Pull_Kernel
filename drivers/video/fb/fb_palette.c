#include <stdint.h>

uint32_t rgb_to_pixel(uint8_t r, uint8_t g, uint8_t b) {
    return (uint32_t)((r << 16) | (g << 8) | b);
}

void fill_rect(uint32_t *fb, int x, int y, int w, int h, uint32_t color, int stride) {
    for (int i = y; i < y + h; i++) {
        for (int j = x; j < x + w; j++) {
            fb[i * stride + j] = color;
        }
    }
}
