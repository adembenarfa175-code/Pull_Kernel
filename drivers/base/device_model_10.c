#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 10 */
struct device_10 { const char *name; uint32_t id; int status; };
void register_dev_10(struct device_10 *d) {
    if(!d) return;
    d->status = 1;
}
