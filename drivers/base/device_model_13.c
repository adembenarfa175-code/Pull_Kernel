#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 13 */
struct device_13 { const char *name; uint32_t id; int status; };
void register_dev_13(struct device_13 *d) {
    if(!d) return;
    d->status = 1;
}
