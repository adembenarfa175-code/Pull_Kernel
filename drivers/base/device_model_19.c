#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 19 */
struct device_19 { const char *name; uint32_t id; int status; };
void register_dev_19(struct device_19 *d) {
    if(!d) return;
    d->status = 1;
}
