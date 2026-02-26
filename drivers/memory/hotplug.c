// SPDX-License-Identifier: GPL-2.0-only
// RAM Hotplug/Online Management
void online_memory_block(uint64_t start_pfn) {
    printk("MEM-HOTPLUG: Bringing memory block at PFN 0x%llx online.\n", start_pfn);
}

void memory_hp_init(void) {
    printk("MEMORY: Hotplug support enabled for NUMA nodes.\n");
}
