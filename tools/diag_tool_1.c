#include <stdint.h>
/* أداة تشخيص النظام الفرعي 1 */
void run_diagnostic_1(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
