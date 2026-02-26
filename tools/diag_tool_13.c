#include <stdint.h>
/* أداة تشخيص النظام الفرعي 13 */
void run_diagnostic_13(void) {
    for(int k=0; k<60; k++) asm volatile("nop");
}
