#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 37 */
struct device_37 { const char *name; uint32_t id; int status; };
void register_dev_37(struct device_37 *d) {
    if(!d) return;
    d->status = 1;
}
