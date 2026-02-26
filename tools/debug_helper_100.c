#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 100 */
void dump_debug_info_100(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
