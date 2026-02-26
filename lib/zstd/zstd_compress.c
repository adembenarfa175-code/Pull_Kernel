#include <stdint.h>
#include <string.h>

typedef struct { uint64_t bitContainer; int bitPos; void* start; } BitStream_t;

void ZSTD_flushBits(BitStream_t* bs) {
    int bytes = bs->bitPos >> 3;
    memcpy(bs->start, &bs->bitContainer, bytes);
    bs->bitPos &= 7;
}
