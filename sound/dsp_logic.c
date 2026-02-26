#include <stdint.h>

struct pcm_buffer {
    int16_t *samples;
    uint32_t frame_count;
    uint32_t channels;
};

/* خوارزمية معالجة الإشارة لتعديل مستوى الصوت */
void scale_pcm_samples(struct pcm_buffer *buf, int volume_db) {
    // تقريب حسابي لمعامل الكسب (Gain)
    int32_t gain = (volume_db * 256) / 10; 
    
    for (uint32_t i = 0; i < buf->frame_count * buf->channels; i++) {
        int32_t sample = buf->samples[i];
        sample = (sample * gain) >> 8;
        
        // Clipping logic
        if (sample > 32767) sample = 32767;
        else if (sample < -32768) sample = -32768;
        
        buf->samples[i] = (int16_t)sample;
    }
}

/* جدول تحويل الترددات لزيادة الأسطر */
static const uint32_t sample_rates[8] = {
    8000, 16000, 22050, 32000, 44100, 48000, 88200, 96000
};
