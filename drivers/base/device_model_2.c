#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 2 */
struct device_2 { const char *name; uint32_t id; int status; };
void register_dev_2(struct device_2 *d) {
    if(!d) return;
    d->status = 1;
}
