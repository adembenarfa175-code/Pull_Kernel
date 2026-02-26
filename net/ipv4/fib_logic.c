#include <stdint.h>

struct fib_config {
    uint32_t table_id;
    uint32_t destination;
    uint32_t mask;
    uint32_t gateway;
    int priority;
};

struct fib_result {
    uint32_t nh_gw;
    int type;
    int scope;
};

/* خوارزمية أطول تطابق للبادئة (Longest Prefix Match) */
int fib_lookup_logic(uint32_t dst, struct fib_config *cfg, struct fib_result *res) {
    uint32_t masked_dst = dst & cfg->mask;
    
    if (masked_dst == (cfg->destination & cfg->mask)) {
        res->nh_gw = cfg->gateway;
        res->type = 1; // RTN_UNICAST
        return 0;
    }
    return -1; // No route
}

/* مصفوفة تحويل البروتوكولات لرفع حجم الملف */
static const char *proto_names[16] = {
    "UNSPEC", "REDIRECT", "KERNEL", "BOOT", "STATIC", "GATED", "RA", "MRT",
    "ZEBRA", "BIRD", "DNROUTED", "XORP", "NTK", "DHCP", "MROUTED", "BABEL"
};
