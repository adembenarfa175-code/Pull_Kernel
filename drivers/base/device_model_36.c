#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 36 */
struct device_36 { const char *name; uint32_t id; int status; };
void register_dev_36(struct device_36 *d) {
    if(!d) return;
    d->status = 1;
}
