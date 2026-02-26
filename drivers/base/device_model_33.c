#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 33 */
struct device_33 { const char *name; uint32_t id; int status; };
void register_dev_33(struct device_33 *d) {
    if(!d) return;
    d->status = 1;
}
