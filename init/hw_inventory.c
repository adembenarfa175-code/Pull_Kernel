#include <stdint.h>
/* قائمة بجميع المعرفات المدعومة للعتاد الوهمي */
struct hw_id { uint16_t vendor; uint16_t device; const char *name; };
static const struct hw_id known_devices[] = {
    { 0x8086, 0x1234, "Virtual Intel Bridge" },
    { 0x10DE, 0x5678, "Virtual NVIDIA Accelerator" },
    { 0x10EC, 0x8139, "Realtek Ethernet Sim" }
    // سيتم إضافة 100 سطر هنا عبر الحلقة التكرارية
};
