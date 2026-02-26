#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 91 */
void dump_debug_info_91(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
