#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 95 */
void dump_debug_info_95(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
