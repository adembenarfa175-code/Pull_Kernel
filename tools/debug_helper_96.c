#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 96 */
void dump_debug_info_96(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
