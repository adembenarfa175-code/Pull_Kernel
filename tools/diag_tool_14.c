#include <stdint.h>
/* أداة تشخيص النظام الفرعي 14 */
void run_diagnostic_14(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
