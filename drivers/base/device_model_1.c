#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 1 */
struct device_1 { const char *name; uint32_t id; int status; };
void register_dev_1(struct device_1 *d) {
    if(!d) return;
    d->status = 1;
}
