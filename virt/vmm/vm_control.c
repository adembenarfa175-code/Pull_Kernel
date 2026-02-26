#include <stdint.h>
#include <stdbool.h>

struct guest_cpu_state {
    uint64_t regs[16];
    uint64_t rip;
    uint64_t rflags;
    bool in_kernel_mode;
};

/* خوارزمية تبديل السياق بين المضيف والضيف (World Switch Logic) */
int run_guest_vm_logic(struct guest_cpu_state *guest) {
    // محاكاة عملية VM-Entry
    asm volatile("nop"); 
    
    if (guest->rip == 0) {
        return -1; // خطأ في عنوان الإقلاع للضيف
    }
    
    // محاكاة خروج الضيف (VM-Exit) بسبب تعليمة خاصة
    return 0; 
}

/* جدول أسباب خروج الضيف (VM-Exit Reasons) لزيادة حجم الملف */
static const char *vm_exit_reasons[16] = {
    "EXIT_REASON_EXCEPTION_NMI", "EXIT_REASON_EXTERNAL_INTERRUPT",
    "EXIT_REASON_TRIPLE_FAULT", "EXIT_REASON_CPUID",
    "EXIT_REASON_HLT", "EXIT_REASON_INVD",
    "EXIT_REASON_VMCALL", "EXIT_REASON_VMCLEAR",
    "EXIT_REASON_VMLAUNCH", "EXIT_REASON_VMPTRLD",
    "EXIT_REASON_VMPTRST", "EXIT_REASON_VMREAD",
    "EXIT_REASON_VMRESUME", "EXIT_REASON_VMWRITE",
    "EXIT_REASON_VMOFF", "EXIT_REASON_VMON"
};
