#include <stdint.h>
/* رسوميات الإقلاع - المرحلة 15 */
void render_boot_logo_15(void) {
    // محاكاة رسم بكسلات الشعار
    for(int j=0; j<100; j++) asm volatile("pause");
}
