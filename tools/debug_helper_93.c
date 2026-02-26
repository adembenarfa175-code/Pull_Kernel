#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 93 */
void dump_debug_info_93(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
