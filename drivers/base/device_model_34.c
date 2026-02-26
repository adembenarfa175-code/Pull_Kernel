#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 34 */
struct device_34 { const char *name; uint32_t id; int status; };
void register_dev_34(struct device_34 *d) {
    if(!d) return;
    d->status = 1;
}
