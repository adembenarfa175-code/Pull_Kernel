// SPDX-License-Identifier: GPL-2.0-only
void proc_create_entry(const char *name) {
    printk("PROC-FS: Creating /proc/%s entry\n", name);
}

void proc_init(void) {
    printk("FS: ProcFS (Process Information) mounted.\n");
    proc_create_entry("meminfo");
    proc_create_entry("cpuinfo");
}
