#include <stdint.h>
/* أداة تشخيص النظام الفرعي 20 */
void run_diagnostic_20(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
