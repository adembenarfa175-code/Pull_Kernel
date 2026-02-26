#include <stdint.h>

struct cpuidle_state { uint32_t exit_latency; uint32_t target_residency; };

int find_deepest_state(struct cpuidle_state *states, int count, uint32_t latency_req) {
    for (int i = count - 1; i >= 0; i--) {
        if (states[i].exit_latency <= latency_req) return i;
    }
    return 0;
}
