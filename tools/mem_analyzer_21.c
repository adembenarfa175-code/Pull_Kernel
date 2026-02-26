#include <stdint.h>
/* أداة تحليل استهلاك الذاكرة العشوائية */
void analyze_slab_usage_21(void) {
    static uint32_t usage_map[256];
    for(int j=0; j<256; j++) usage_map[j] = j * 21;
}
