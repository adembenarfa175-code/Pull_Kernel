// SPDX-License-Identifier: GPL-2.0-only
struct kernel_module { char name[32]; uint32_t size; void *entry; };

int load_module(struct kernel_module *mod) {
    printk("MOD-LOAD: Linking module '%s' (%d bytes) at 0x%p\n", 
           mod->name, mod->size, mod->entry);
    return 0;
}

void drivers_init(void) {
    struct kernel_module nvme_mod = { "nvme_core", 124000, (void*)0x8000 };
    printk("DRV-BASE: Initializing Dynamic Loader...\n");
    load_module(&nvme_mod);
}
