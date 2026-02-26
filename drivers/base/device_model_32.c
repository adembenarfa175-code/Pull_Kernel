#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 32 */
struct device_32 { const char *name; uint32_t id; int status; };
void register_dev_32(struct device_32 *d) {
    if(!d) return;
    d->status = 1;
}
