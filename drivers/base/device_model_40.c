#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 40 */
struct device_40 { const char *name; uint32_t id; int status; };
void register_dev_40(struct device_40 *d) {
    if(!d) return;
    d->status = 1;
}
