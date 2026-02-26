#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 31 */
struct device_31 { const char *name; uint32_t id; int status; };
void register_dev_31(struct device_31 *d) {
    if(!d) return;
    d->status = 1;
}
