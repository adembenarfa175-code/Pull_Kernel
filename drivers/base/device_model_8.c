#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 8 */
struct device_8 { const char *name; uint32_t id; int status; };
void register_dev_8(struct device_8 *d) {
    if(!d) return;
    d->status = 1;
}
