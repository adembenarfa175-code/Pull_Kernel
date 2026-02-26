#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 99 */
void dump_debug_info_99(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
