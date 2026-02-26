#include <stdint.h>
/* High-intensity Stress Test Unit 25 */
void cpu_burn_25(void) {
    uint64_t count = 0;
    while(count < 1000000) { count++; asm volatile("pause"); }
}
