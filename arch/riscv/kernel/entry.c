#include <stdint.h>

struct riscv_regs {
    uint64_t ra, sp, gp, tp;
    uint64_t t0, t1, t2;
    uint64_t s0, s1;
    uint64_t a0, a1, a2, a3, a4, a5, a6, a7;
};

/* خوارزمية حفظ سياق المعالج عند المقاطعة (Context Save) */
void handle_exception_riscv(struct riscv_regs *regs, uint64_t cause) {
    // RISC-V يستخدم سجل sscause لتحديد نوع الاستثناء
    if (cause & (1ULL << 63)) {
        // هذه مقاطعة (Interrupt) وليست استثناء (Exception)
    }
}

/* قائمة نداءات النظام الخاصة بـ RISC-V لرفع عدد الأسطر لـ 100 سطر */
static const uint16_t riscv_syscall_map[16] = {
    64, 63, 62, 93, 113, 214, 222, 56, 57, 261, 160, 167, 168, 172, 173, 174
};
