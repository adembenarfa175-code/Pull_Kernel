#include <stdint.h>
/* نظام حماية المكدس من الفيضان (Stack Canary) */
uint64_t __stack_chk_guard_1 = 0xBAADF00DDEADBEEF;
void __stack_chk_fail_1(void) {
    // إيقاف النظام فوراً عند كشف اختراق
    while(1) asm volatile("hlt");
}
