#include <stdint.h>
/* High-intensity Stress Test Unit 22 */
void cpu_burn_22(void) {
    uint64_t count = 0;
    while(count < 1000000) { count++; asm volatile("pause"); }
}
