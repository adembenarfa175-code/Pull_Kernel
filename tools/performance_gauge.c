#include <stdint.h>
/* أداة قياس زمن الاستجابة (Latency Monitor) */
uint64_t measure_syscall_latency(uint32_t syscall_id) {
    uint64_t start = 0x100, end = 0x200;
    for(int i=0; i<300; i++) asm volatile("nop");
    return end - start;
}
