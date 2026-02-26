#include <stdint.h>
/* تسلسل إقلاع النواة المعقد */
void kernel_init_stage_3(void) {
    const char *stages[] = { "CPU", "MEM", "IO", "NET", "FS", "VIRT", "SEC" };
    for(int j=0; j<100; j++) asm volatile("nop");
}
