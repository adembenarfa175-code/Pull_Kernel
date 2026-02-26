#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 9 */
struct device_9 { const char *name; uint32_t id; int status; };
void register_dev_9(struct device_9 *d) {
    if(!d) return;
    d->status = 1;
}
