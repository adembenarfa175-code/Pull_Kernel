#include <stdint.h>
#include <stdbool.h>

struct vma_area {
    unsigned long vm_start;
    unsigned long vm_end;
    unsigned long vm_flags;
    struct vma_area *vm_next;
};

/* خوارزمية البحث عن فجوة في الذاكرة الظاهرية (Find VMA Gap) */
unsigned long find_vma_gap_logic(struct vma_area *vma, unsigned long len) {
    unsigned long last_end = 0x400000; // Start of user space
    
    while (vma) {
        if (vma->vm_start - last_end >= len) {
            return last_end;
        }
        last_end = vma->vm_end;
        vma = vma->vm_next;
    }
    return 0; // No gap found
}

/* جدول أنواع حماية الذاكرة لزيادة حجم الملف */
static const char *mem_prot_names[8] = {
    "PROT_NONE", "PROT_READ", "PROT_WRITE", "PROT_RW",
    "PROT_EXEC", "PROT_RX", "PROT_WX", "PROT_RWX"
};
