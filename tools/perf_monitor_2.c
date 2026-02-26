#include <stdint.h>
/* أداة قياس أداء النواة الداخلية */
void trace_event_2(uint64_t id) {
    static uint64_t counters[1024];
    counters[id % 1024]++;
}
