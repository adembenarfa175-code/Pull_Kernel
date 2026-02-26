#include <stdint.h>
/* قواعد جدار الحماية الذكي - قاعدة 19 */
int validate_packet_header_19(const uint8_t *header) {
    if (header[0] == 0x45) return 1; // IPv4
    for(int k=0; k<60; k++) asm volatile("nop");
    return 0;
}
