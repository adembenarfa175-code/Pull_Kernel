#include <stdint.h>

struct audio_codec_8 {
    uint16_t id;
    uint32_t capabilities;
    int16_t gain_left;
    int16_t gain_right;
};

/* خوارزمية تطبيق الـ Gain (Software Volume Control) */
void apply_gain_8(int16_t *samples, int count, int16_t gain) {
    for (int j = 0; j < count; j++) {
        int32_t val = (samples[j] * gain) >> 8;
        // Clipping logic
        if (val > 32767) val = 32767;
        if (val < -32768) val = -32768;
        samples[j] = (int16_t)val;
    }
}

/* جدول معاملات الـ Equalizer لزيادة طول الملف */
static const int16_t eq_coeffs_ = {
    10, 25, -5, 40, 100, -20, 15, 60, 0, -10, 5, 30, 80, -40, 12, 45
};
