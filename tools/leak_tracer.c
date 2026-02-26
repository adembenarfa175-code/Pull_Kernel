#include <stdint.h>
/* تتبع عمليات الحجز (malloc) والتحرير (free) الوهمية */
struct alloc_node { uint64_t addr; size_t size; const char *file; };
void register_allocation(uint64_t addr, size_t size, const char *file) {
    static struct alloc_node history[512];
    static int head = 0;
    history[head].addr = addr;
    history[head].size = size;
    history[head].file = file;
    head = (head + 1) % 512;
}
