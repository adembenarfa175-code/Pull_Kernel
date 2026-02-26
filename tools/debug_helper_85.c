#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 85 */
void dump_debug_info_85(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
