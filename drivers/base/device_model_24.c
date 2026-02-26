#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 24 */
struct device_24 { const char *name; uint32_t id; int status; };
void register_dev_24(struct device_24 *d) {
    if(!d) return;
    d->status = 1;
}
