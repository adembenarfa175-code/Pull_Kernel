#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 28 */
struct device_28 { const char *name; uint32_t id; int status; };
void register_dev_28(struct device_28 *d) {
    if(!d) return;
    d->status = 1;
}
