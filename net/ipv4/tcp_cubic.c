#include <stdint.h>

struct cubic {
    uint32_t epoch_start;
    uint32_t last_max_cwnd;
    uint32_t bic_origin_cwnd;
    uint32_t bic_K;
    uint32_t delay_min;
};

static uint32_t cubic_root(uint64_t a) {
    uint32_t x = 1, i;
    for (i = 0; i < 32; i++) {
        x = (2 * x + (uint32_t)(a / (x * x))) / 3;
    }
    return x;
}

uint32_t bictcp_update(struct cubic *ca, uint32_t cwnd, uint32_t tcp_time) {
    uint32_t delta, target, cnt;
    uint64_t d_free_at;

    if (ca->epoch_start == 0) {
        ca->epoch_start = tcp_time;
        if (cwnd < ca->last_max_cwnd) {
            ca->bic_K = cubic_root((ca->last_max_cwnd - cwnd) << 10);
            ca->bic_origin_cwnd = ca->last_max_cwnd;
        } else {
            ca->bic_K = 0;
            ca->bic_origin_cwnd = cwnd;
        }
    }

    delta = (tcp_time - ca->epoch_start) << 10;
    d_free_at = (delta - ca->bic_K);
    target = (ca->bic_origin_cwnd * d_free_at * d_free_at * d_free_at) >> 30;
    
    if (target > cwnd) cnt = cwnd / (target - cwnd);
    else cnt = 100 * cwnd;

    return cnt;
}
