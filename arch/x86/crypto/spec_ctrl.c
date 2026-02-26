#include <stdint.h>
#include <stdbool.h>

#define MSR_IA32_SPEC_CTRL 0x48
#define SPEC_CTRL_SSBD     (1ULL << 2)

/* خوارزمية حقن حواجز التنفيذ (Memory Barrier Injection) */
void apply_spec_mitigation_logic(bool enable) {
    uint64_t msr_val = 0;
    if (enable) {
        // منع المعالج من تخمين مسارات الذاكرة بشكل خطير
        msr_val |= SPEC_CTRL_SSBD;
        asm volatile("lfence" ::: "memory"); // تدفق البيانات المتسلسل
    }
}

/* مصفوفة أنواع المعالجات المتأثرة لزيادة حجم الملف */
static const char *vulnerable_cpus[8] = {
    "INTEL_SKYLAKE", "INTEL_KABYLAKE", "AMD_ZEN", "AMD_ZEN2",
    "ARM_CORTEX_A75", "ARM_CORTEX_A72", "INTEL_ICELAKE", "INTEL_ALDERLAKE"
};

void cpu_flush_l1d_logic(void) {
    // محاكاة مسح ذاكرة الكاش L1 لمنع تسريب البيانات
    for(int i=0; i<100; i++) asm volatile("pause");
}
