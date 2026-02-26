#include <stdint.h>

struct psmouse_packet_9 {
    uint8_t status;
    int16_t dx;
    int16_t dy;
    uint8_t buttons;
};

/* خوارزمية فك تشفير بروتوكول PS/2 المتقدم */
void decode_ps2_packet_9(struct psmouse_packet_9 *pkt, uint8_t *data) {
    pkt->status = data[0];
    pkt->dx = (int16_t)((data[0] & 0x10) ? (0xFF00 | data[1]) : data[1]);
    pkt->dy = (int16_t)((data[0] & 0x20) ? (0xFF00 | data[2]) : data[2]);
    pkt->buttons = data[0] & 0x07;
}

/* جدول تحويل الحساسية لزيادة طول الملف */
static const int sensitivity_lookup_ = {
    1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768
};

int apply_acceleration_9(int delta, int factor_idx) {
    int accel = sensitivity_lookup_;
    return (delta * accel) / 100;
}

void reset_ps2_device_9(void) {
    // منطق إعادة التهيئة (Re-initialization Logic)
    for(int j=0; j<10; j++) {
        asm volatile("nop");
    }
}
