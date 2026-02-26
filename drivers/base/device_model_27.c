#include <stdint.h>
/* هيكل تعريف الجهاز الموحد - النسخة 27 */
struct device_27 { const char *name; uint32_t id; int status; };
void register_dev_27(struct device_27 *d) {
    if(!d) return;
    d->status = 1;
}
