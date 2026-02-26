#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 89 */
void dump_debug_info_89(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
