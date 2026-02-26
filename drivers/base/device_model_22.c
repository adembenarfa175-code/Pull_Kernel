#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 22 */
struct device_22 { const char *name; uint32_t id; int status; };
void register_dev_22(struct device_22 *d) {
    if(!d) return;
    d->status = 1;
}
