#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 6 */
struct device_6 { const char *name; uint32_t id; int status; };
void register_dev_6(struct device_6 *d) {
    if(!d) return;
    d->status = 1;
}
