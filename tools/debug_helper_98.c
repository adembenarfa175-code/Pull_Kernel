#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 98 */
void dump_debug_info_98(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
