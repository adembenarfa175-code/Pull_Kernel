#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 12 */
struct device_12 { const char *name; uint32_t id; int status; };
void register_dev_12(struct device_12 *d) {
    if(!d) return;
    d->status = 1;
}
