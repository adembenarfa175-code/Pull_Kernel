#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 11 */
struct device_11 { const char *name; uint32_t id; int status; };
void register_dev_11(struct device_11 *d) {
    if(!d) return;
    d->status = 1;
}
