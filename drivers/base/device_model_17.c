#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 17 */
struct device_17 { const char *name; uint32_t id; int status; };
void register_dev_17(struct device_17 *d) {
    if(!d) return;
    d->status = 1;
}
