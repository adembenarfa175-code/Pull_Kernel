#include <stdint.h>
/* أداة تشخيص النظام الفرعي 15 */
void run_diagnostic_15(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
