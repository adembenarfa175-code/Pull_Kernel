#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 16 */
struct device_16 { const char *name; uint32_t id; int status; };
void register_dev_16(struct device_16 *d) {
    if(!d) return;
    d->status = 1;
}
