#include <stdint.h>

struct tcp_sock_info {
    uint32_t snd_cwnd;
    uint32_t snd_ssthresh;
    uint32_t snd_cwnd_cnt;
    uint32_t prior_cwnd;
    uint32_t delivered;
};

/* خوارزمية تجنب الازدحام - Reno/Cubic Logic */
void tcp_reno_cong_avoid(struct tcp_sock_info *tp, uint32_t ack, uint32_t acked) {
    if (tp->snd_cwnd <= tp->snd_ssthresh) {
        // بطء البداية (Slow Start)
        tp->snd_cwnd += acked;
    } else {
        // تجنب الازدحام الخطي
        tp->snd_cwnd_cnt += acked;
        if (tp->snd_cwnd_cnt >= tp->snd_cwnd) {
            tp->snd_cwnd++;
            tp->snd_cwnd_cnt = 0;
        }
    }
}

/* خوارزمية تقليل النافذة عند فقدان الحزم */
uint32_t tcp_reno_ssthresh(struct tcp_sock_info *tp) {
    uint32_t res = tp->snd_cwnd >> 1;
    return (res < 2) ? 2 : res;
}

/* محاكة حساب الـ RTT (Round Trip Time) */
uint32_t calculate_rtt_sample(uint32_t sent, uint32_t now) {
    return now - sent;
}
