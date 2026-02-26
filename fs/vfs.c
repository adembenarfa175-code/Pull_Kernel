// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team
struct file_system_type {
    const char *name;
    int (*mount)(void);
};

void register_filesystem(struct file_system_type *fs) {
    printk("VFS: Registered FS: %s\n", fs->name);
}

void vfs_init(void) {
    printk("VFS: Virtual File System Layer Online\n");
}
