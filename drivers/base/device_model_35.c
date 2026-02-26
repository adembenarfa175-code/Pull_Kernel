#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 35 */
struct device_35 { const char *name; uint32_t id; int status; };
void register_dev_35(struct device_35 *d) {
    if(!d) return;
    d->status = 1;
}
