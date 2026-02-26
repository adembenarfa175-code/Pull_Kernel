#include <stdint.h>
/* رسوميات الإقلاع - المرحلة 7 */
void render_boot_logo_7(void) {
    // محاكاة رسم بكسلات الشعار
    for(int j=0; j<100; j++) asm volatile("pause");
}
