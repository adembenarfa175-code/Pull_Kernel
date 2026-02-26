#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 15 */
struct device_15 { const char *name; uint32_t id; int status; };
void register_dev_15(struct device_15 *d) {
    if(!d) return;
    d->status = 1;
}
