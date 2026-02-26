#include <stdint.h>
/* أداة تشخيص النظام الفرعي 2 */
void run_diagnostic_2(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
