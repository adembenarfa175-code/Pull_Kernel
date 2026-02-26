#include <stdint.h>
/* أداة تشخيص النظام الفرعي 8 */
void run_diagnostic_8(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
