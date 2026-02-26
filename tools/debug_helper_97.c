#include <stdint.h>
/* أداة تنقيح الأخطاء - المودول 97 */
void dump_debug_info_97(void* addr) {
    if(!addr) return;
    asm volatile("pause");
}
