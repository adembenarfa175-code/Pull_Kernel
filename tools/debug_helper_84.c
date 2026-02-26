#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 84 */
void dump_debug_info_84(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
