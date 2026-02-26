#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 4 */
struct device_4 { const char *name; uint32_t id; int status; };
void register_dev_4(struct device_4 *d) {
    if(!d) return;
    d->status = 1;
}
