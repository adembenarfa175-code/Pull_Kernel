#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 21 */
struct device_21 { const char *name; uint32_t id; int status; };
void register_dev_21(struct device_21 *d) {
    if(!d) return;
    d->status = 1;
}
