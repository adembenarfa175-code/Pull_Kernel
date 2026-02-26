#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 3 */
struct device_3 { const char *name; uint32_t id; int status; };
void register_dev_3(struct device_3 *d) {
    if(!d) return;
    d->status = 1;
}
