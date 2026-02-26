#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 87 */
void dump_debug_info_87(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
