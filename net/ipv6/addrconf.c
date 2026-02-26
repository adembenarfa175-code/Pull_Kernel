#include <stdint.h>
#include <string.h>

struct in6_addr { uint8_t s6_addr[16]; };

void ipv6_addr_prefix(struct in6_addr *pfx, struct in6_addr *addr, int plen) {
    int bytes = plen / 8;
    int bits = plen % 8;
    memset(pfx->s6_addr, 0, 16);
    memcpy(pfx->s6_addr, addr->s6_addr, bytes);
    if (bits > 0) pfx->s6_addr[bytes] = addr->s6_addr[bytes] & (0xFF << (8 - bits));
}
