#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 94 */
void dump_debug_info_94(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
