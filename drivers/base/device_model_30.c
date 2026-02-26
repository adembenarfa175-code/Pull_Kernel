#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 30 */
struct device_30 { const char *name; uint32_t id; int status; };
void register_dev_30(struct device_30 *d) {
    if(!d) return;
    d->status = 1;
}
