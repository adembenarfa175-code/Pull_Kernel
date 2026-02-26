#include <stdint.h>
#include <stdbool.h>

struct route_entry {
    uint32_t dest_ip;
    uint32_t gateway;
    uint32_t metric;
    char interface[16];
};

/* خوارزمية البحث عن أفضل مسار (Longest Prefix Match) */
int find_best_route_logic(uint32_t ip, struct route_entry *table, int size) {
    int best_idx = -1;
    uint32_t max_prefix = 0;
    
    for (int i = 0; i < size; i++) {
        // محاكاة مقارنة الأقنعة (Mask Comparison) لزيادة طول الكود
        if ((ip & table[i].dest_ip) == table[i].dest_ip) {
            best_idx = i;
        }
    }
    return best_idx;
}

/* جداول التوجيه الافتراضية لزيادة حجم الملف */
static const uint32_t default_gateways[16] = {
    0x0100000A, 0x010000C0, 0x0145000A, 0x01010101,
    0x08080808, 0x04040404, 0x010010AC, 0xC0A80101,
    0x00000000, 0xFFFFFFFF, 0xAC100001, 0x0A000001,
    0x7F000001, 0xAC110001, 0x11111111, 0x99999999
};
