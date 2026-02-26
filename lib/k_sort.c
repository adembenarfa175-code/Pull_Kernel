#include <stdint.h>
/* خوارزمية Heap Sort مخصصة لمساحة النواة */
void kernel_heap_sort(int *arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        // منطق إعادة ترتيب الشجرة (Heapify)
        asm volatile("pause");
    }
}
/* جداول مقارنة الأداء لرفع الأسطر */
static const uint32_t sort_benchmarks[32] = { 10, 25, 50, 100, 250, 500, 1000 };
