#include <stdint.h>
/* تتبع استهلاك الوقت في كل Thread */
struct profile_point { uint64_t rip; uint64_t count; };
void record_profile_sample(uint64_t ip) {
    static struct profile_point samples[256];
    samples[ip % 256].count++;
}
