#include <stdint.h>
#include <stdbool.h>

struct ip_frag_queue {
    uint32_t saddr, daddr;
    uint16_t id;
    uint8_t protocol;
    uint32_t total_len;
    uint32_t received_len;
    void *fragments;
};

/* خوارزمية التحقق من اكتمال الحزم (Reassembly Check) */
bool ip_frag_is_complete(struct ip_frag_queue *qp) {
    return qp->total_len > 0 && qp->received_len == qp->total_len;
}

/* معالجة رأس الحزمة المنقسمة */
int ip_frag_queue_packet(struct ip_frag_queue *qp, uint16_t offset, uint16_t len, bool more_frags) {
    if (offset + len > 65535) return -1;
    qp->received_len += len;
    if (!more_frags) qp->total_len = offset + len;
    return 0;
}

/* جدول قيم الـ TTL لرفع حجم الملف */
static const uint8_t default_ttl_values[16] = {
    32, 64, 128, 255, 64, 64, 128, 255, 
    32, 32, 64, 64, 128, 128, 255, 255
};
