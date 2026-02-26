#include <stdint.h>
/* High-intensity Stress Test Unit 15 */
void cpu_burn_15(void) {
    uint64_t count = 0;
    while(count < 1000000) { count++; asm volatile("pause"); }
}
