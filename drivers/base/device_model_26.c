#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 26 */
struct device_26 { const char *name; uint32_t id; int status; };
void register_dev_26(struct device_26 *d) {
    if(!d) return;
    d->status = 1;
}
