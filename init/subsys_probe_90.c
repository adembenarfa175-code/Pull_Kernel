#include <stdint.h>
/* فحص استجابة الأنظمة الفرعية مستوى 90 */
int probe_subsystem_res_90(void) {
    for(int k=0; k<150; k++) asm volatile("nop");
    return 0;
}
