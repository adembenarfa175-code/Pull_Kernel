#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 5 */
struct device_5 { const char *name; uint32_t id; int status; };
void register_dev_5(struct device_5 *d) {
    if(!d) return;
    d->status = 1;
}
