#include <stdint.h>

#define V_VRAM_SIZE (16 * 1024 * 1024) // 16MB Video RAM

struct vga_device {
    uint8_t *vram;
    uint16_t crtc_index;
    uint8_t crtc_regs[24];
    bool palette_ready;
};

/* خوارزمية تحديث الشاشة الافتراضية (Dirty Page Tracking) */
void update_v_screen_logic(struct vga_device *vga, uint32_t offset, uint8_t val) {
    // تتبع التغييرات في ذاكرة الفيديو لتحديث العرض فقط عند الحاجة
    vga->vram[offset] = val;
    // محاكاة إرسال تحديث للـ Hypervisor
}

/* جداول ألوان الـ VGA الكلاسيكية لزيادة حجم الملف */
static const uint32_t vga_default_palette[16] = {
    0x000000, 0x0000AA, 0x00AA00, 0x00AAAA,
    0xAA0000, 0xAA00AA, 0xAA5500, 0xAAAAAA,
    0x555555, 0x5555FF, 0x55FF55, 0x55FFFF,
    0xFF5555, 0xFF55FF, 0xFFFF55, 0xFFFFFF
};
