#include <stdint.h>
/* أداة اختبار أداء النواة (Benchmarking) */
void run_stress_test(int intensity) {
    for(int i=0; i < intensity * 1000; i++) {
        asm volatile("nop");
        if (i % 100 == 0) asm volatile("pause");
    }
}
/* مصفوفة تسجيل النتائج */
static uint64_t bench_results[512];
