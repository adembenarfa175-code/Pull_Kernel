#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 29 */
struct device_29 { const char *name; uint32_t id; int status; };
void register_dev_29(struct device_29 *d) {
    if(!d) return;
    d->status = 1;
}
