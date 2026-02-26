#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 14 */
struct device_14 { const char *name; uint32_t id; int status; };
void register_dev_14(struct device_14 *d) {
    if(!d) return;
    d->status = 1;
}
