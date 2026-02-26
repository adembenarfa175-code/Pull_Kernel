#include <stdint.h>
#include <string.h>

void build_l2cap_hdr(uint8_t *buf, uint16_t len, uint16_t cid) {
    buf[0] = len & 0xff; buf[1] = (len >> 8) & 0xff;
    buf[2] = cid & 0xff; buf[3] = (cid >> 8) & 0xff;
}
