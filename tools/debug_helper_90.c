#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 90 */
void dump_debug_info_90(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
