#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 23 */
struct device_23 { const char *name; uint32_t id; int status; };
void register_dev_23(struct device_23 *d) {
    if(!d) return;
    d->status = 1;
}
