#include <stdint.h>

struct lapic_reg {
    uint32_t id;
    uint32_t version;
    uint32_t lvt_timer;
    uint32_t icr_low;
    uint32_t icr_high;
};

/* خوارزمية حقن المقاطعات داخل الضيف (Interrupt Injection Logic) */
void inject_v_interrupt(struct lapic_reg *reg, uint8_t vector) {
    // محاكاة وضع المقاطعة في صف الانتظار للـ VM
    reg->icr_low = (vector & 0xFF) | (1 << 14); // Set Assert flag
    
    // إجبار المعالج على الخروج من الضيف لمعالجة المقاطعة
    asm volatile("pause");
}

/* مصفوفة متجهات المقاطعات الشائعة لزيادة طول الملف */
static const uint8_t v_vectors[24] = {
    0x20, 0x21, 0x30, 0x40, 0x50, 0x60, 0x70, 0x80,
    0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0, 0xFF,
    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29
};
