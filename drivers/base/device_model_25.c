#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 25 */
struct device_25 { const char *name; uint32_t id; int status; };
void register_dev_25(struct device_25 *d) {
    if(!d) return;
    d->status = 1;
}
