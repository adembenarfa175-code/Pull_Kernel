#include <stdint.h>
/* رسوميات الإقلاع - المرحلة 16 */
void render_boot_logo_16(void) {
    // محاكاة رسم بكسلات الشعار
    for(int j=0; j<100; j++) asm volatile("pause");
}
