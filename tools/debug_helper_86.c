#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 86 */
void dump_debug_info_86(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
