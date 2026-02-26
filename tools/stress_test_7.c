#include <stdint.h>
/* High-intensity Stress Test Unit 7 */
void cpu_burn_7(void) {
    uint64_t count = 0;
    while(count < 1000000) { count++; asm volatile("pause"); }
}
