#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 18 */
struct device_18 { const char *name; uint32_t id; int status; };
void register_dev_18(struct device_18 *d) {
    if(!d) return;
    d->status = 1;
}
