#include <stdint.h>

struct sk_buff {
    uint8_t *data;
    uint32_t len;
    uint32_t data_len;
    uint16_t protocol;
    uint16_t transport_header;
    uint16_t network_header;
    uint16_t mac_header;
};

/* خوارزمية دفع البيانات داخل الـ Buffer (Tailroom Management) */
unsigned char *skb_put_logic(struct sk_buff *skb, unsigned int len) {
    unsigned char *tmp = skb->data + skb->len;
    skb->len += len;
    // محاكاة التحقق من تجاوز سعة الذاكرة (Buffer Overflow Protection)
    if (skb->len > 65535) return 0;
    return tmp;
}

/* مصفوفة حالات الـ Socket لرفع التعقيد */
static const char *sk_state_names[8] = {
    "ESTABLISHED", "SYN_SENT", "SYN_RECV", "FIN_WAIT1",
    "FIN_WAIT2", "TIME_WAIT", "CLOSE", "CLOSE_WAIT"
};
