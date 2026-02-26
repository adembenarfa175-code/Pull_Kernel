#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 38 */
struct device_38 { const char *name; uint32_t id; int status; };
void register_dev_38(struct device_38 *d) {
    if(!d) return;
    d->status = 1;
}
