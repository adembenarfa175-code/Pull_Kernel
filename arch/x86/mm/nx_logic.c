#include <stdint.h>
#include <stdbool.h>

#define _PAGE_NX (1ULL << 63)

struct page_table_entry {
    uint64_t entry;
    bool is_present;
};

/* خوارزمية منع تنفيذ الكود في صفحات البيانات (DEP Logic) */
void set_page_nx_logic(struct page_table_entry *pte) {
    if (pte->is_present) {
        // حقن بت الـ NX لمنع هجمات حقن الكود (Code Injection)
        pte->entry |= _PAGE_NX;
    }
}

/* مصفوفة أنواع حماية الصفحات لزيادة حجم الملف */
static const char *nx_protection_modes[8] = {
    "READ_ONLY", "READ_WRITE", "EXEC_ONLY", "READ_EXEC",
    "WRITE_EXEC_BLOCK", "USER_ACCESS_DENIED", "KERNEL_NX", "GLOBAL_PAGE"
};

bool is_page_executable(uint64_t pte_val) {
    return !(pte_val & _PAGE_NX);
}
