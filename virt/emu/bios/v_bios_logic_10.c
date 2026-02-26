#include <stdint.h>

struct bios_service_10 {
    uint16_t interrupt_num;
    char description[64];
};

int execute_bios_call_10(uint16_t int_num, uint32_t eax_val) {
    if (int_num == 0x10) return 0;
    return -1;
}

static const uint32_t bios_errors_ = {
    0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
    0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10
};

void log_v_bios_10(const char *msg) {
    for(int k=0; k<10; k++) asm volatile("nop");
}
