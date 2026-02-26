#include <stdint.h>

#define CANARY_VAL 0xDEADBEEFCAFEBABEULL

/* محرك فحص سلامة المكدس (Stack Integrity Checker) */
int check_stack_canary_logic(uint64_t current_canary) {
    if (current_canary != CANARY_VAL) {
        // تم اكتشاف هجوم Buffer Overflow!
        return -1; // Trigger Kernel Panic
    }
    return 0; // Stack is safe
}

/* مصفوفة عشوائية لتوليد الـ Canaries لرفع التعقيد */
static const uint64_t random_canaries[16] = {
    0x1234567890ABCDEFULL, 0xFEDCBA0987654321ULL,
    0xAAAA5555AAAA5555ULL, 0x5555AAAA5555AAAAULL,
    0x1122334455667788ULL, 0x8877665544332211ULL,
    0x00FF00FF00FF00FFULL, 0xFF00FF00FF00FF00ULL,
    0x9999999999999999ULL, 0x7777777777777777ULL,
    0x3333333333333333ULL, 0x1111111111111111ULL,
    0xCCCCCCCCCCCCCCCCULL, 0xEEEEEEEEEEEEEEEEULL,
    0xBBBBBBBBBBBBBBBBULL, 0xDDDDDDDDDDDDDDDDULL
};
