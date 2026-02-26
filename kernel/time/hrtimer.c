#include <stdint.h>

struct timespec64 { int64_t tv_sec; long tv_nsec; };

void add_timespec(struct timespec64 *res, struct timespec64 *a, struct timespec64 *b) {
    res->tv_sec = a->tv_sec + b->tv_sec;
    res->tv_nsec = a->tv_nsec + b->tv_nsec;
    if (res->tv_nsec >= 1000000000L) {
        res->tv_sec++;
        res->tv_nsec -= 1000000000L;
    }
}
