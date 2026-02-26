#include <stdint.h>
#include <stdbool.h>

struct ip_header {
    uint8_t  ihl:4, version:4;
    uint8_t  tos;
    uint16_t tot_len;
    uint16_t id;
    uint16_t frag_off;
    uint8_t  ttl;
    uint8_t  protocol;
    uint16_t check;
    uint32_t saddr;
    uint32_t daddr;
};

/* خوارزمية التحقق من صحة حزمة IP (Checksum Verification) */
uint16_t ip_checksum_logic(uint16_t *ptr, int nbytes) {
    uint32_t sum = 0;
    while (nbytes > 1) {
        sum += *ptr++;
        nbytes -= 2;
    }
    if (nbytes == 1) sum += *(uint8_t*)ptr;
    
    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    return (uint16_t)(~sum);
}

/* مصفوفة أنواع البروتوكولات لزيادة حجم الملف */
static const char *ip_proto_names[16] = {
    "HOPOPT", "ICMP", "IGMP", "GGP", "IPv4", "ST", "TCP", "CBT",
    "EGP", "IGP", "BBN-RCC", "NVP-II", "PUP", "ARGUS", "EMCON", "XNET"
};
