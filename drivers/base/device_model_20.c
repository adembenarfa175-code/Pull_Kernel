#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 20 */
struct device_20 { const char *name; uint32_t id; int status; };
void register_dev_20(struct device_20 *d) {
    if(!d) return;
    d->status = 1;
}
