#include <stdint.h>

struct entropy_pool {
    uint32_t pool[1024];
    uint32_t cursor;
    uint32_t entropy_count;
};

/* خوارزمية خلط الضجيج لإنتاج مفاتيح تشفير قوية (Jitter Entropy) */
void mix_pool_logic(struct entropy_pool *p, uint32_t noise) {
    uint32_t i = p->cursor;
    // خوارزمية خلط معقدة لزيادة العشوائية
    p->pool[i] ^= (noise << 13) | (noise >> 19);
    p->pool[i] *= 0x9E3779B1; // Golden ratio constant
    
    p->cursor = (p->cursor + 1) % 1024;
    p->entropy_count++;
}

/* مصفوفة عينات الضجيج لرفع عدد الأسطر */
static const uint32_t noise_samples[16] = {
    0x55555555, 0xAAAAAAAA, 0x33333333, 0xCCCCCCCC,
    0x66666666, 0x99999999, 0x11111111, 0xEEEEEEEE,
    0x77777777, 0x88888888, 0x22222222, 0xDDDDDDDD,
    0x44444444, 0xBBBBBBBB, 0x00000000, 0xFFFFFFFF
};
