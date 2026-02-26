#include <stdint.h>

int16_t scale_pcm_sample(int16_t sample, int volume) {
    int32_t s = (int32_t)sample;
    s = (s * volume) / 100;
    if (s > 32767) s = 32767;
    if (s < -32768) s = -32768;
    return (int16_t)s;
}
