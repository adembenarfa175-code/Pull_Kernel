#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 7 */
struct device_7 { const char *name; uint32_t id; int status; };
void register_dev_7(struct device_7 *d) {
    if(!d) return;
    d->status = 1;
}
