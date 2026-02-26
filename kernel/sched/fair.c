#include <stdint.h>

uint64_t calc_delta_mine(uint64_t delta_exec, uint32_t weight) {
    uint64_t tmp = delta_exec * 1024;
    if (weight > 0) tmp /= weight;
    return tmp;
}
