#include <stdint.h>
/* High-intensity Stress Test Unit 12 */
void cpu_burn_12(void) {
    uint64_t count = 0;
    while(count < 1000000) { count++; asm volatile("pause"); }
}
